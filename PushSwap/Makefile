# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/08 11:06:45 by akaabi            #+#    #+#              #
#    Updated: 2023/06/02 15:39:36 by akaabi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
libft = libft/
libft_a = libft/libft.a
libfto = libft/*.o

SRC = push_swap1.c  \
		parsing.c \
		more_utils.c \
		more_utils2.c \
		instractions.c \
		instractions2.c \
		sorting.c \
		
OBJECTS = $(SRC:.c=.o)

all: $(NAME)

$(NAME) : $(OBJECTS) push_swap.h
	@make -C $(libft)
	$(CC) $(CFLAGS)  $(libft_a) $(OBJECTS) -o $(NAME)

%.o : %.c
	$(CC) $(CFLAGS) -c $< 

clean:
	$(RM) $(OBJECTS) $(libfto)

fclean: clean
	$(RM) $(NAME) $(libfto) $(libft_a)

re: fclean all