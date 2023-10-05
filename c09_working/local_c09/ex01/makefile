SRC			= ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c
SRCS		= $(addprefix ./srcs/, $(SRC))
OBS			= $(SRCS:.c=.o)

all	:	libft.a

.c.o:	
	gcc -Wall -Wextra -Werror -I includes -c $< -o ${<:.c=.o}

libft.a	:	$(OBS)
	ar rc libft.a $(OBS)

clean :
	rm -f $(OBS)

fclean : clean
	rm -f libft.a

re	:	fclean all

.PHONY :	all clean fclean re