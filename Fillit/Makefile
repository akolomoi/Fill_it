# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akolomoi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/27 17:43:20 by akolomoi          #+#    #+#              #
#    Updated: 2018/11/27 17:43:25 by akolomoi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS = -Wall -Wextra -Werror
NAME = fillit

.PHONY: all clean fclean re

all: $(NAME)

$(NAME):
	make -C libft/ fclean && make -C libft/
	gcc $(CFLAGS) -I libft/includes -c *.c
	gcc $(CFLAGS) -I libft/includes -o main.o -c main.c
	gcc -o $(NAME) *.o -I libft/includes -L libft/ -lft

clean:
	rm -f *.o
	rm -f ./libft/*.o

fclean: clean
	rm -f $(NAME)
	rm -f ./libft/libft.a	

re: fclean all
