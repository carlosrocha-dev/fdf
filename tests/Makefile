# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: caalbert <caalbert@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/23 15:53:07 by caalbert          #+#    #+#              #
#    Updated: 2022/09/23 16:07:17 by caalbert         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= fdf
CC			= gcc
FLAGS		= -Wall -Werror -Wextra -c $< -o $@
SRC			= main.c
OBJS		= ${SRC:.c=.o}
RM			= rm -if
%.o: %.c
	$(CC) $(FLAGS)

all: $(NAME)
	$(NAME): $(OBJS)
	$(CC) $OBJS) -Lmlx -lmlx -framerwork OpenGL -framework AppKit -o $(NAME)

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