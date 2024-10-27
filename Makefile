# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rabiner <rabiner@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/01 14:56:11 by rabiner           #+#    #+#              #
#    Updated: 2024/10/15 19:31:22 by rabiner          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror -I.

SRCS = ft_bzero.c \
	ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
	ft_bzero.c ft_memcpy.c ft_memmove.c ft_memset.c \
	ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_strnstr.c \
	ft_toupper.c ft_tolower.c \
	ft_strchr.c \
	ft_atoi.c ft_itoa.c \
	ft_calloc.c \
	ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c \
	ft_strmapi.c ft_striteri.c \
	ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \

BONUS = ft_lstnew.c \

SRCSALL = ${SRCS} ${BONUS}

OBJS = $(SRCS:.c=.o)

OBJSALL = $(SRCSALL:.c=.o)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

bonus: ${OBJSALL}
	ar rcs $(NAME) $(OBJSALL)

clean:
	$(RM) $(OBJSALL)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
