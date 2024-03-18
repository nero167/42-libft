# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: namirtha <namirtha@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/18 11:40:16 by namirtha          #+#    #+#              #
#    Updated: 2024/03/18 13:19:33 by namirtha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = cc
CCFLAGS = -Wextra -Werror -Wall -std=c99
SRCS = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isascii.c \
    ft_isdigit.c ft_isprint.c ft_memcmp.c ft_memcpy.c ft_memmove.c \
    ft_memset.c ft_strchr.c ft_strdup.c ft_strjoin.c ft_strlcat.c \
    ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c \
    ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c ft_isalpha.c
OBJS = $(SRCS:.c=.o)

all: $(NAME)

%.o: %.c
	$(CC) $(CCFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
