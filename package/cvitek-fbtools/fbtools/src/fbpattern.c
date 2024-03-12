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

int main(void) {
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

  int x, y;

  int patsize;
  patsize = fb.var_info.xres >> 3;

  x = patsize;
  y = fb.var_info.yres - patsize;

  fbabgr8888_draw_solid(&fb,
			x - patsize,
			y - patsize,
			x,
			y,
			ABGR8888_RED | ABGR8888_ALPHA);
  fbabgr8888_draw_str(&fb,
		      x - patsize,
		      y - patsize,
		      ABGR8888_BLACK | ABGR8888_ALPHA,
		      ABGR8888_WHITE | ABGR8888_ALPHA,
		      " RED ");

  fbabgr8888_draw_solid(&fb,
			x,
			y - patsize,
			x + patsize,
			y,
			ABGR8888_GREEN | ABGR8888_ALPHA);
  fbabgr8888_draw_str(&fb,
		      x,
		      y - patsize,
		      ABGR8888_BLACK | ABGR8888_ALPHA,
		      ABGR8888_WHITE | ABGR8888_ALPHA,
		      " GREEN ");


  fbabgr8888_draw_solid(&fb,
			x - patsize,
			y,
			x,
			y + patsize,
			ABGR8888_BLUE | ABGR8888_ALPHA);
  fbabgr8888_draw_str(&fb,
		      x - patsize,
		      y,
		      ABGR8888_BLACK | ABGR8888_ALPHA,
		      ABGR8888_WHITE | ABGR8888_ALPHA,
		      " BLUE ");

  fbabgr8888_draw_solid(&fb,
			x,
			y,
			x + patsize,
			y + patsize,
			ABGR8888_WHITE | ABGR8888_ALPHA);
  fbabgr8888_draw_str(&fb,
		      x,
		      y,
		      ABGR8888_BLACK | ABGR8888_ALPHA,
		      ABGR8888_WHITE | ABGR8888_ALPHA,
		      " WHITE ");

  x = fb.var_info.xres - patsize; 
  y = fb.var_info.yres - patsize;

  int xmin, ymin, xmax, ymax;
  uint32_t color;

  xmin = x - patsize;
  ymin = y - patsize;
  xmax = x;
  ymax = y;

  for (; xmin < xmax; xmin++) {
    if (xmin & 1) {
      color = ABGR8888_BLACK | ABGR8888_ALPHA;
    } else {
      color = ABGR8888_WHITE | ABGR8888_ALPHA;
    }
    fbabgr8888_draw_yline(&fb, ymin, ymax, xmin, color);
  }
  fbabgr8888_draw_str(&fb,
		      x - patsize,
		      y - patsize,
		      ABGR8888_BLACK | ABGR8888_ALPHA,
		      ABGR8888_WHITE | ABGR8888_ALPHA,
		      " VLINE ");

  xmin = x;
  ymin = y - patsize;
  xmax = x + patsize;
  ymax = y;

  for (; ymin < ymax; ymin++) {
    if (ymin & 1) {
      color = ABGR8888_BLACK | ABGR8888_ALPHA;
    } else {
      color = ABGR8888_WHITE | ABGR8888_ALPHA;
    }
    fbabgr8888_draw_xline(&fb, xmin, xmax, ymin, color);
  }
  fbabgr8888_draw_str(&fb,
		      x,
		      y - patsize,
		      ABGR8888_BLACK | ABGR8888_ALPHA,
		      ABGR8888_WHITE | ABGR8888_ALPHA,
		      " HLINE ");


  xmin = x - patsize;
  ymin = y;
  xmax = x;
  ymax = y + patsize;

  for (; ymin < ymax; ymin++) {
    for (xmin = x - patsize; xmin < xmax; xmin++) {
      if ((xmin + ymin) & 1) {
	color = ABGR8888_BLACK | ABGR8888_ALPHA;
      } else {
	color = ABGR8888_WHITE | ABGR8888_ALPHA;
      }
      fbabgr8888_draw_pixel(&fb, xmin, ymin, color);
    }
  }

  fbabgr8888_draw_str(&fb,
		      x - patsize,
		      y,
		      ABGR8888_BLACK | ABGR8888_ALPHA,
		      ABGR8888_WHITE | ABGR8888_ALPHA,
		      " CHESS ");

  fbabgr8888_draw_solid(&fb,
			x,
			y,
			x + patsize,
			y + patsize,
			ABGR8888_BLACK | ABGR8888_ALPHA);
  fbabgr8888_draw_str(&fb,
		      x,
		      y,
		      ABGR8888_BLACK | ABGR8888_ALPHA,
		      ABGR8888_WHITE | ABGR8888_ALPHA,
		      " BLACK ");

  exit(EXIT_SUCCESS);
}
