NAME 			= fdf
HEADERS 		= fdf.h
INCLUDE_HEADERS = $(addprefix headers/, $(HEADERS))
CC				= cc
FLAGS			= -c -Wall -Wextra -Werror
SRC 			= main.c

LIBFT			= ./libft/libft.a
MLX_MAC			= ./mlx_mac/libmlx.a
OBJECTS		=	${SRC:.c=.o}
AR			=	ar rcs
RM			=	rm -f
$(NAME): $(OBJECTS) $(HDRS)
					$(CC) $(FLAGS) $(SRCS)
					$(AR) $(NAME) $(OBJECTS)

all:	$(NAME)

norm:
	watch norminette ${SRCS} ${HDRS}

clean:
	$(RM) $(OBJECTS) *.out

fclean:	clean
			$(RM) $(NAME)

test:
	cc -g3 -I ./include main.c $(SRCS)

leaks:
	valgrind ./a.out --show-leak-kinds=all --track-origins=yes  --leak-check=full

backup:
	make fclean
	git status
	git add .
	git commit -m "Updade"
	git push

pull:
	git pull

re: 	fclean all

.PHONY: all clean fclean re norm pull backup
