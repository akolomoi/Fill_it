CFLAGS = -Wall -Wextra -Werror
NAME = libft.a

all: $(NAME)

$(NAME):
	gcc -c $(CFLAGS) -I includes *.c
	ar rc $(NAME) *.o
	ranlib $(NAME)
clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)	

re: fclean all
