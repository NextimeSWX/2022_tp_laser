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
int width = pxa->clipable.clip_width;
int height = pxa->clipable.clip_height;
int px = width * height;
int i = 0;
printf("%d x %d\n", width, height);
unsigned int *tmp = (unsigned int *) pxa -> pixels;
 while (i <= px)
     {
         tmp[i] = color;
         i = i + 1;
     }
}
