#include <stdio.h>
#include <stdlib.h>
#include <sys/select.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdint.h>
#include <sys/mman.h>
#include <linux/fb.h>
#include <sys/ioctl.h>
#include <string.h>
#include <time.h>
#include <signal.h>
#include "fbabgr8888.h"

int main(int argc, char *argv[]) {
  int x;
  int y;

  if (argc < 4) {
    printf("usage: %s y fg bg\n",argv[0]);
    printf("bg/fg: format: \n");
    printf("[ALPHA 8bit][BLUE 8bit][GREEN 8bit][RED 8bit]\n");
    printf("black: 0xFF000000, white: 0xFFFFFFFF\n");
    exit(EXIT_FAILURE);
  }

  x = 0;
  y = atoi(argv[1]);

  uint32_t fg;
  uint32_t bg;

  fg = strtol(argv[2], NULL, 16);
  bg = strtol(argv[3], NULL, 16);
  
  int fbfd = -1;
  char *fbdev = "/dev/fb0";
  char *s;
  s = getenv("FRAMEBUFFER");
  if (s != NULL) {
    fbdev = s;
  }
  fbfd = open(fbdev, O_RDWR);
  if (fbfd < 0) {
    perror("can't open framebuffer device");
    exit(EXIT_FAILURE);
  }

  fbabgr8888 fb;
  
  if (ioctl(fbfd, FBIOGET_FSCREENINFO, &fb.fix_info) < 0) {
    perror("can't get framebuffer fix info");
    exit(EXIT_FAILURE);
  }
  if (ioctl(fbfd, FBIOGET_VSCREENINFO, &fb.var_info) < 0) {
    perror("can't get framebuffer var info");
    exit(EXIT_FAILURE);
  }
  
  fb.mem = mmap(NULL, fb.fix_info.smem_len, PROT_READ | PROT_WRITE,
		MAP_SHARED, fbfd, 0);
  if (fb.mem == MAP_FAILED) {
    perror("mmap");
    exit(EXIT_FAILURE);
  }

  char *buf;
  int bufsize;

  bufsize = fb.var_info.xres / FONT_W;
  buf = malloc(bufsize);

  while(1) {
    memset(buf, ' ', bufsize);
    if (fgets(buf, bufsize - 1, stdin) == NULL) {
      if (feof(stdin) != 0) {
	exit(EXIT_SUCCESS);
      } else {
	perror("fgets");
      }
    }
    buf[bufsize - 1] = '\0';
    fbabgr8888_draw_solid(&fb, x, y,
			  fb.var_info.xres, y + FONT_H, bg);
    fbabgr8888_draw_str(&fb, x, y, fg, bg, buf);
  }
}
