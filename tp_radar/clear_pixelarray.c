/*
 * E89 Pedagogical & Technical Lab
 * project:     rayon
 * created on:  2023-01-19 - 14:31 +0100
 * 1st author:  evan.lebihan - evan.lebihan
 * description: clear_pixelarray.c
 */

#include "stu.h"

void stu_clear_pixelarray(t_bunny_pixelarray *pxa, unsigned int color)
{
    unsigned int *tmp;
    int width;
    int height;
    int px;
    int i;

    i = 0;
    width = pxa->clipable.clip_width;
    height = pxa->clipable.clip_height;
    px = width * height;
    tmp = (unsigned int *) pxa->pixels;
    while (i <= px)
        {
            tmp[i] = color;
            i += 1;
        }
}
