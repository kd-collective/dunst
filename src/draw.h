#ifndef DUNST_DRAW_H
#define DUNST_DRAW_H

#include <stdbool.h>
#include <cairo.h>
#include "output.h"

extern window win; // Temporary
extern const struct output *output;

void draw_setup(void);

void draw(void);

void draw_rounded_rect(cairo_t *c, int x, int y, int width, int height, int corner_radius, int scale, bool first, bool last);

// TODO get rid of this function by passing scale to everything that needs it.
int draw_get_scale(void);

void draw_deinit(void);


#endif
/* vim: set ft=c tabstop=8 shiftwidth=8 expandtab textwidth=0: */
