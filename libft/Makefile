# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fyuzhyk <fyuzhyk@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/02 18:05:06 by fyuzhyk           #+#    #+#              #
#    Updated: 2022/04/06 08:49:34 by fyuzhyk          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CFLAGS = -Wall -Wextra -Werror

SRC = ft_atoi.o ft_bzero.o ft_calloc.o ft_isalnum.o ft_isalpha.o ft_isascii.o ft_isdigit.o\
ft_isprint.o ft_itoa.o ft_memchr.o ft_memcmp.o ft_memcpy.o ft_memmove.o ft_memset.o ft_putchar_fd.o\
ft_putendl_fd.o ft_putnbr_fd.o ft_putstr_fd.o ft_split.o ft_strchr.o ft_strdup.o ft_striteri.o\
ft_strjoin.o ft_strlcat.o ft_strlcpy.o ft_strlen.o ft_strmapi.o ft_strncmp.o ft_strnstr.o ft_strrchr.o\
ft_strtrim.o ft_substr.o ft_tolower.o ft_toupper.o

BONUS = ft_lstnew.o ft_lstadd_front.o ft_lstsize.o ft_lstlast.o\
ft_lstadd_back.o ft_lstdelone.o ft_lstclear.o ft_lstiter.o ft_lstmap.o

all: $(NAME)

$(NAME): $(SRC)
	ar rc $(NAME) $(SRC)

bonus: $(SRC) $(NAME) $(BONUS)
	ar rc $(NAME) $(SRC) $(BONUS)

ft_atoi.o: ft_atoi.c
	cc -c $(CFLAGS) ft_atoi.c -o ft_atoi.o

ft_bzero.o: ft_bzero.c
	cc -c $(CFLAGS) ft_bzero.c -o ft_bzero.o

ft_calloc.o: ft_calloc.c
	cc -c $(CFLAGS) ft_calloc.c -o ft_calloc.o

ft_isalnum.o: ft_isalnum.c
	cc -c $(CFLAGS) ft_isalnum.c -o ft_isalnum.o

ft_isalpha.o: ft_isalpha.c
	cc -c $(CFLAGS) ft_isalpha.c -o ft_isalpha.o

ft_isascii.o: ft_isascii.c
	cc -c $(CFLAGS) ft_isascii.c -o ft_isascii.o

ft_isdigit.o: ft_isdigit.c
	cc -c $(CFLAGS) ft_isdigit.c -o ft_isdigit.o

ft_isprint.o: ft_isprint.c
	cc -c $(CFLAGS) ft_isprint.c -o ft_isprint.o

ft_itoa.o: ft_itoa.c
	cc -c $(CFLAGS) ft_itoa.c -o ft_itoa.o

ft_memchr.o: ft_memchr.c
	cc -c $(CFLAGS) ft_memchr.c -o ft_memchr.o

ft_memcmp.o: ft_memcmp.c
	cc -c $(CFLAGS) ft_memcmp.c -o ft_memcmp.o

ft_memcpy.o: ft_memcpy.c
	cc -c $(CFLAGS) ft_memcpy.c -o ft_memcpy.o

ft_memmove.o: ft_memmove.c
	cc -c $(CFLAGS) ft_memmove.c -o ft_memmove.o

ft_memset.o: ft_memset.c
	cc -c $(CFLAGS) ft_memset.c -o ft_memset.o

ft_putchar_fd.o: ft_putchar_fd.c
	cc -c $(CFLAGS) ft_putchar_fd.c -o ft_putchar_fd.o

ft_putendl_fd.o: ft_putendl_fd.c
	cc -c $(CFLAGS) ft_putendl_fd.c -o ft_putendl_fd.o

ft_putnbr_fd.o: ft_putnbr_fd.c
	cc -c $(CFLAGS) ft_putnbr_fd.c -o ft_putnbr_fd.o

ft_putstr_fd.o: ft_putstr_fd.c
	cc -c $(CFLAGS) ft_putstr_fd.c -o ft_putstr_fd.o

ft_split.o: ft_split.c
	cc -c $(CFLAGS) ft_split.c -o ft_split.o

ft_strchr.o: ft_strchr.c
	cc -c $(CFLAGS) ft_strchr.c -o ft_strchr.o

ft_strdup.o: ft_strdup.c
	cc -c $(CFLAGS) ft_strdup.c -o ft_strdup.o

ft_striteri.o: ft_striteri.c
	cc -c $(CFLAGS) ft_striteri.c -o ft_striteri.o

ft_strjoin.o: ft_strjoin.c
	cc -c $(CFLAGS) ft_strjoin.c -o ft_strjoin.o

ft_strlcat.o: ft_strlcat.c
	cc -c $(CFLAGS) ft_strlcat.c -o ft_strlcat.o

ft_strlcpy.o: ft_strlcpy.c
	cc -c $(CFLAGS) ft_strlcpy.c -o ft_strlcpy.o

ft_strlen.o: ft_strlen.c
	cc -c $(CFLAGS) ft_strlen.c -o ft_strlen.o

ft_strmapi.o: ft_strmapi.c
	cc -c $(CFLAGS) ft_strmapi.c -o ft_strmapi.o

ft_strncmp.o: ft_strncmp.c
	cc -c $(CFLAGS) ft_strncmp.c -o ft_strncmp.o

ft_strnstr.o: ft_strnstr.c
	cc -c $(CFLAGS) ft_strnstr.c -o ft_strnstr.o

ft_strrchr.o: ft_strrchr.c
	cc -c $(CFLAGS) ft_strrchr.c -o ft_strrchr.o

ft_strtrim.o: ft_strtrim.c
	cc -c $(CFLAGS) ft_strtrim.c -o ft_strtrim.o

ft_substr.o: ft_substr.c
	cc -c $(CFLAGS) ft_substr.c -o ft_substr.o

ft_tolower.o: ft_tolower.c
	cc -c $(CFLAGS) ft_tolower.c -o ft_tolower.o

ft_toupper.o: ft_toupper.c
	cc -c $(CFLAGS) ft_toupper.c -o ft_toupper.o

ft_lstnew.o: ft_lstnew.c
	cc -c $(CFLAGS) ft_lstnew.c -o ft_lstnew.o

ft_lstadd_front.o: ft_lstadd_front.c
	cc -c $(CFLAGS) ft_lstadd_front.c -o ft_lstadd_front.o

ft_lstsize.o: ft_lstsize.c
	cc -c $(CFLAGS) ft_lstsize.c -o ft_lstsize.o

ft_lstlast.o: ft_lstlast.c
	cc -c $(CFLAGS) ft_lstlast.c -o ft_lstlast.o

ft_lstadd_back.o: ft_lstadd_back.c
	cc -c $(CFLAGS) ft_lstadd_back.c -o ft_lstadd_back.o

ft_lstdelone.o: ft_lstdelone.c
	cc -c $(CFLAGS) ft_lstdelone.c -o ft_lstdelone.o

ft_lstclear.o: ft_lstclear.c
	cc -c $(CFLAGS) ft_lstclear.c -o ft_lstclear.o

ft_lstiter.o: ft_lstiter.c
	cc -c $(CFLAGS) ft_lstiter.c -o ft_lstiter.o

ft_lstmap.o: ft_lstmap.c
	cc -c $(CFLAGS) ft_lstmap.c -o ft_lstmap.o

fclean: clean
	rm -f $(NAME)

clean:
	rm -f $(SRC) $(BONUS)

re: fclean all
