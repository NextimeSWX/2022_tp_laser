/*
 * E89 Pedagogical & Technical Lab
 * project:     tp_laser
 * created on:  2022-11-22 - 09:48 +0100
 * 1st author:  evan.lebihan - evan.lebihan
 * description: stu.h
 */

#ifndef STU_H_
#define STU_H_

#include <math.h>
#include <lapin.h>
#include <assert.h>
#include <stdlib.h>
#include "map.h"

typedef t_bunny_accurate_position t_accurate_pos;
t_bunny_position pos_from_accurate(const t_accurate_pos *conv);
t_accurate_pos move_forward(const t_accurate_pos *start,
                            double angle,
                            double len);
t_accurate_pos send_ray(struct map *map,
                        const t_accurate_pos *start,
                        double angle);
void draw_impact(struct map *map,
                 t_bunny_pixelarray *pxa,
                 const t_accurate_pos *start,
                 double angle);
void stu_clear_pixelarray(t_bunny_pixelarray *pxa, unsigned int color);
void put_pixel(t_bunny_position *pos,
               t_bunny_pixelarray *px,
               unsigned int color);
t_bunny_position stu_tile_size(t_bunny_position posa,
                  struct map *map);
float get_ratio(int a, int b, int x);
int get_value(int a, int b, float r);
void stu_draw_line(unsigned int color,
                  t_bunny_position *pos_a,
                   t_bunny_position *pos_b,
                  t_bunny_pixelarray *px);
void ysupx(unsigned int color,
           t_bunny_position pos,
           t_bunny_position *pos_a,
           t_bunny_position *pos_b,
           t_bunny_pixelarray *px);
void  xsupy(unsigned int color,
           t_bunny_position pos,
          t_bunny_position *pos_a,
          t_bunny_position *pos_b,
          t_bunny_pixelarray *px);
double deg_to_rads(int degrees);

#endif
