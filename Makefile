# E89 Pedagogical & Technical Lab
# project:     template C repo
# created on:  2022-09-14 - 16:36 +0200
# 1st author:  Élise C. Philippe - eriizu
# description: Building the project

NAME	=	radar

SRCS	=	tp_radar/radar.main.c		\
		tp_radar/send_ray.c		\
		tp_radar/draw_line.c		\
		tp_radar/clear_pixelarray.c	\
		tp_radar/pos_from_accurate.c	\
		tp_radar/put_pixel.c		\
		tp_radar/move_forward.c		\
		tp_radar/get_value.c		\
		tp_radar/get_ratio.c		\
		tp_radar/deg_to_rads.c

OBJS	=	$(SRCS:.c=.o)

CFLAGS	+=	-W -Wall -Wextra -Werror -Iinclude/

LDFLAGS	+=	-llapin -lsfml-graphics -lsfml-window -lsfml-system -lstdc++ -lm

RM	=	rm -vf

CC	:=	gcc


ifdef RELEASE
CFLAGS += -O2
endif

ifdef DEBUG
CFLAGS += -g
endif

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) $(LDFLAGS) -o $(NAME)

clean:
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

# Theses rules do not directly map to a specific file
.PHONY: all clean fclean re
