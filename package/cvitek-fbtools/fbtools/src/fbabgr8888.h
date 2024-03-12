#include <fcntl.h>
#include <linux/fb.h>
#include <stdint.h>
#include <string.h>
#include <sys/ioctl.h>
#include <sys/mman.h>

#define ABGR8888_BLUE  (0xFF << 0)
#define ABGR8888_GREEN (0xFF << 8)
#define ABGR8888_RED   (0xFF << 16)
#define ABGR8888_WHITE (ABGR8888_BLUE | ABGR8888_GREEN | ABGR8888_RED)
#define ABGR8888_BLACK (0x00)
#define ABGR8888_YELLO (ABGR8888_RED | ABGR8888_GREEN)
#define ABGR8888_ALPHA (0xFF << 24)

struct fbabgr8888 {
  uint8_t *mem;
  struct fb_fix_screeninfo fix_info;
  struct fb_var_screeninfo var_info;
};
typedef struct fbabgr8888 fbabgr8888;

static inline void fbabgr8888_draw_pixel(fbabgr8888 *fb, int x, int y,
                                         uint32_t data) {
  if ((((uint16_t)x) >= fb->var_info.xres) ||
      (((uint16_t)y) >= fb->var_info.yres)) {
    return;
  }
  uint8_t *p;
  p = fb->mem;
  p += y * fb->fix_info.line_length + x * 4; // 32bit framebuffer
  uint32_t *p32;
  p32 = (uint32_t *)p;
  *p32 = data;
}

static inline void fbabgr8888_draw_xline(fbabgr8888 *fb, int xmin, int xmax,
                                         int y, uint32_t data) {
  for (; xmin <= xmax; xmin++) {
    fbabgr8888_draw_pixel(fb, xmin, y, data);
  }
}

static inline void fbabgr8888_draw_yline(fbabgr8888 *fb, int ymin, int ymax,
                                         int x, uint32_t data) {
  for (; ymin <= ymax; ymin++) {
    fbabgr8888_draw_pixel(fb, x, ymin, data);
  }
}

static inline void fbabgr8888_draw_rect(fbabgr8888 *fb, int xmin, int ymin,
                                        int xmax, int ymax, uint32_t data) {
  fbabgr8888_draw_xline(fb, xmin, xmax, ymin, data);
  fbabgr8888_draw_xline(fb, xmin, xmax, ymax, data);
  fbabgr8888_draw_yline(fb, ymin, ymax, xmin, data);
  fbabgr8888_draw_yline(fb, ymin, ymax, xmax, data);
}

static inline void fbabgr8888_draw_solid(fbabgr8888 *fb, int xmin, int ymin,
                                         int xmax, int ymax, uint32_t data) {
  for (; ymin <= ymax; ymin++) {
    fbabgr8888_draw_xline(fb, xmin, xmax, ymin, data);
  }
}

#include "uni_vga.h"

// fallbback, no font
#ifndef FONT_H
#define FONT_H 0
#endif

#ifndef FONT_W
#define FONT_W 0
#endif

#ifndef FONT_CODE_POINTS
#define FONT_CODE_POINTS 0
#endif

static inline void fbabgr8888_draw_char(fbabgr8888 *fb, int x, int y,
                                        uint32_t fg, uint32_t bg, int c) {
  int i;
  int found = 0;
  // todo, replace by binary search
  for (i = 0; i < FONT_CODE_POINTS; i++) {
    if (c == font_default_code_points[i]) {
      found = 1;
      break;
    }
  }
  if (!found) {
    return;
  }
  int xf, yf;
  for (yf = 0; yf < FONT_H; yf++) {
    for (xf = 0; xf < FONT_W; xf++) {
      if (font_default_data[i][yf] & (1 << (FONT_W - xf))) {
        fbabgr8888_draw_pixel(fb, x + xf, y + yf, fg);
      } else {
        fbabgr8888_draw_pixel(fb, x + xf, y + yf, bg);
      }
    }
  }
}

static inline void fbabgr8888_draw_str(fbabgr8888 *fb, int x, int y,
                                       uint32_t fg, uint32_t bg, char *s) {
  int i = 0;
  while (s[i] != '\0') {
    fbabgr8888_draw_char(fb, x, y, fg, bg, s[i]);
    x += FONT_W;
    i++;
  }
}
