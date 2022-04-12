# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fyuzhyk <fyuzhyk@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/12 10:14:19 by fyuzhyk           #+#    #+#              #
#    Updated: 2022/04/12 14:54:36 by fyuzhyk          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = $(OBJ_DIR)/libftprintf.a

CFLAGS = -Wall -Wextra -Werror

SRC_DIR = c_files
LIBFT_DIR = libft
OBJ_DIR = .

SRC = $(wildcard $(SRC_DIR)/*.c)
OBJ = $(SRC:$(SRC_DIR)/%.c=$(SRC_DIR)/%.o)
SRC_LIBFT = $(wildcard $(LIBFT_DIR)/*.c)
OBJ_LIBFT = $(SRC_LIBFT:$(LIBFT_DIR)/%.c=$(LIBFT_DIR)/%.o)

all : $(NAME)

$(NAME) : $(OBJ) $(OBJ_LIBFT)
	ar rc $(NAME) $(OBJ) $(OBJ_LIBFT)

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.c
	$(CC) -c $(CFLAGS) $< -o $@

fclean: clean
	rm -f $(NAME)

clean:
	rm -f $(OBJ) $(OBJ_LIBFT)

re: fclean all
