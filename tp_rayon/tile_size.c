/*
 * E89 Pedagogical & Technical Lab
 * project:     rayon
 * created on:  2023-01-20 - 10:39 +0100
 * 1st author:  evan.lebihan - evan.lebihan
 * description: tile_size.c
 */

#include "stu.h"
#include "map.h"

t_bunny_position stu_tile_size(t_bunny_position posa,
                  struct map *map)
{
    posa.x = posa.x * map->tile_size;
    posa.y = posa.y * map->tile_size;
    return (posa);
}
