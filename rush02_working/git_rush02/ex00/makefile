# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aawgku-o <aawgku-o@student.42kl.edu.my>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/29 23:51:11 by aawgku-o          #+#    #+#              #
#    Updated: 2023/09/29 23:51:18 by aawgku-o         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS_DIR = ex00

SRCS = $(addprefix $(SRCS_DIR)/, *.c)
NAME = rush-02
CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

all: $(NAME)

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "It's Done... $<"

clean:
	@$(RM) $(OBJS)
	@echo "Delete object files."

fclean: clean
	@$(RM) $(NAME)
	@echo "Delete library."

re: fclean all
