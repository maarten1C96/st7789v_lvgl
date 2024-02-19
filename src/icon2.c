
#include <lvgl.h>

#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG_ICON2
#define LV_ATTRIBUTE_IMG_ICON2
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_IMG_ICON2 uint8_t icon2_map[] = {
0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x00, 0x00, 0x01, 0x0c, 0x00, 0x00, 0x00, 0x82, 0x00, 0x00, 
0x00, 0x41, 0x00, 0x00, 0x00, 0x20, 0x80, 0x00, 0x00, 0x10, 0x80, 0x00, 0x60, 0x08, 0x40, 0x00, 
0x70, 0x08, 0x40, 0x00, 0x48, 0x10, 0x40, 0x00, 0x4c, 0x22, 0x40, 0x00, 0x46, 0x42, 0x40, 0x00, 
0x01, 0x84, 0x00, 0x00, 0x20, 0x0c, 0x80, 0x00, 0x10, 0x30, 0x40, 0x00, 0x08, 0x00, 0x20, 0x00, 
0x04, 0x04, 0x10, 0x00, 0x01, 0xf2, 0x08, 0x00, 0x00, 0x01, 0x06, 0x00, 0x00, 0x00, 0x81, 0x00, 
0x00, 0x00, 0x40, 0x80, 0x00, 0x00, 0x20, 0x40, 0x00, 0x00, 0x10, 0x20, 0x00, 0x00, 0x08, 0x10, 
0x00, 0x00, 0x04, 0x28, 0x00, 0x00, 0x04, 0x44, 0x00, 0x00, 0x03, 0x88, 0x00, 0x00, 0x01, 0x10, 
0x00, 0x00, 0x00, 0xa0, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

const lv_img_dsc_t icon2 = {
  .header.always_zero = 0,
  .header.w = 32,
  .header.h = 32,
  .data_size = 128,
  .header.cf = LV_IMG_CF_ALPHA_1BIT,
  .data = icon2_map,
};