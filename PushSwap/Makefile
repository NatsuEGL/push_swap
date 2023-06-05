# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/08 11:06:45 by akaabi            #+#    #+#              #
#    Updated: 2023/06/05 14:00:42 by akaabi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
NAMEB = checker
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
		sorting2.c \
		sorting3.c \
		for_norm.c \
		for_norm2.c \

BNS = 	bonus/checker.c \
		bonus/conditions_bonus.c \
		bonus/parsing_bonus.c \
		bonus/more_utils_bonus.c \
		bonus/more_utils2_bonus.c \
		bonus/instractions_bonus.c \
		bonus/instractions2_bonus.c \
		bonus/sorting_bonus.c \
		bonus/sorting2_bonus.c \
		bonus/sorting3_bonus.c \
		bonus/for_norm_bonus.c \
		bonus/free_func.c \
		
OBJECTS = $(SRC:.c=.o)

OBJECTSB = $(BNS:.c=.o)

all: $(NAME)

$(NAME) : $(OBJECTS) push_swap.h
	@make  -s -C $(libft)
	$(CC) $(CFLAGS)  $(libft_a) $(OBJECTS) -o $(NAME)
	
bonus : $(NAMEB)

$(NAMEB): $(OBJECTSB) bonus/push_swap_bonus.h
	@make  -s -C $(libft)
	$(CC) $(CFLAGS)  $(libft_a) $(OBJECTSB) -o $(NAMEB)
	

%.o : %.c
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	$(RM) $(OBJECTS) $(libfto) $(OBJECTSB)

fclean: clean
	$(RM) $(NAME) $(libfto) $(libft_a) $(NAMEB)

re: fclean all