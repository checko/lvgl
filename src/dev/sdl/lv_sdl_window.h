/**
 * @file lv_sdl_window.h
 *
 */

#ifndef LV_SDL_DISP_H
#define LV_SDL_DISP_H

#ifdef __cplusplus
extern "C" {
#endif

/*********************
 *      INCLUDES
 *********************/

#include "../../display/lv_display.h"
#include "../../indev/lv_indev.h"

#if LV_USE_SDL
#include LV_SDL_INCLUDE_PATH

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 * GLOBAL PROTOTYPES
 **********************/

lv_display_t * lv_sdl_window_create(lv_coord_t hor_res, lv_coord_t ver_res);

void lv_sdl_window_set_zoom(lv_display_t * disp, uint8_t zoom);

uint8_t lv_sdl_window_get_zoom(lv_display_t * disp);

lv_display_t * _lv_sdl_get_disp_from_win_id(uint32_t win_id);

void lv_sdl_window_set_title(lv_display_t * disp, const char * title);

SDL_Renderer * lv_sdl_window_get_renderer(lv_display_t * disp);

SDL_Texture * lv_sdl_window_get_texture(lv_display_t * disp);

void lv_sdl_quit();

/**********************
 *      MACROS
 **********************/

#endif /* LV_DRV_SDL */

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* LV_SDL_DISP_H */
