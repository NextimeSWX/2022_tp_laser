#include "stu.h"
#include "map.h"

// vos prototypes

int main(void)
{
    t_bunny_window           *win;
    t_bunny_pixelarray       *pxa;
    double                    angle;
    t_bunny_accurate_position pos;

    int mx[6 * 6] = {
        1, 1, 1, 1, 1, 1,
        1, 0, 0, 0, 0, 1,
        1, 0, 0, 0, 0, 1,
        1, 0, 0, 0, 1, 1,
        1, 1, 0, 1, 1, 1,
        1, 1, 1, 1, 1, 1,
    };
    struct map map;
    map.width     = 6;
    map.height    = 6;
    map.tile_size = 100;
    map.map       = &mx[0];
    pos.x         = 2.5;
    pos.y         = 2.5;
    angle         = 0;
    win           = bunny_start(map.width * map.tile_size,
                                map.height * map.tile_size,
                                false,
                                "fl: TP Laser");
    pxa = bunny_new_pixelarray(win->buffer.width, win->buffer.height);
    stu_clear_pixelarray(pxa, BLACK);

    // Travaillez ici
    int i;

    i = 0;
    while (i <= 360) {
        angle = deg_to_rads(i);
        draw_impact(&map, pxa, &pos, angle);
        i += 1;
    }

    bunny_blit(&win->buffer, &pxa->clipable, NULL);
    bunny_display(win);
    bunny_usleep(5e6);
    bunny_delete_clipable(&pxa->clipable);
    bunny_stop(win);
    return (0);
}

