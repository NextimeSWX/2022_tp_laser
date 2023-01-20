/*
 * E89 Pedagogical & Technical Lab
 * project:     rayon
 * created on:  2023-01-19 - 10:34 +0100
 * 1st author:  evan.lebihan - evan.lebihan
 * description: draw_impact.c
 */

#include "stu.h"
#include "map.h"

void draw_impact(struct map *map,
                 t_bunny_pixelarray *pxa,
                 const t_accurate_pos *start,
                 double angle)
{
    t_bunny_accurate_position pos;
    t_bunny_position posa;

    pos = send_ray(map, start, angle);
    posa = pos_from_accurate(&pos);
    posa = stu_tile_size(posa, map);
    put_pixel(&posa, pxa, RED);
}
