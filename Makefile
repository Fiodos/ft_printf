# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fyuzhyk <fyuzhyk@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/12 10:14:19 by fyuzhyk           #+#    #+#              #
#    Updated: 2022/06/25 11:44:19 by fyuzhyk          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = $(OBJ_DIR)/libftprintf.a

CFLAGS = -Wall -Wextra -Werror

SRC_DIR = src
LIBFT_DIR = libft
OBJ_DIR = .

SRC = $(wildcard $(SRC_DIR)/*.c)
OBJ = $(SRC:$(SRC_DIR)/%.c=$(SRC_DIR)/%.o)
SRC_LIBFT = $(wildcard $(LIBFT_DIR)/*.c)
OBJ_LIBFT = $(SRC_LIBFT:$(LIBFT_DIR)/%.c=$(LIBFT_DIR)/%.o)

all : $(NAME)

$(NAME) : $(OBJ)
	Make -C ./libft
	cp ./libft/libft.a $(NAME)
	ar rc $(NAME) $(OBJ)

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.c
	$(CC) -c $(CFLAGS) $< -o $@

fclean: clean
	rm -f $(NAME) libft/libft.a

clean:
	rm -f $(OBJ) $(OBJ_LIBFT)

re: fclean all
