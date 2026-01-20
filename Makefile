# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: semebrah <semebrah@student.42berlin.de>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/25 16:09:45 by semebrah          #+#    #+#              #
#    Updated: 2025/11/25 16:51:38 by semebrah         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a

SRCS = ft_atoi.c \
	ft_bzero.c \
	ft_calloc.c \
	ft_isalnum.c \
	ft_isalpha.c \
	ft_isascii.c \
	ft_isdigit.c \
	ft_isprint.c \
	ft_itoa.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_memset.c \
	ft_putchar_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c \
	ft_putstr_fd.c \
	ft_split.c \
	ft_strchr.c \
	ft_strdup.c \
	ft_striteri.c \
	ft_strjoin.c \
	ft_strlcat.c \
	ft_strlcpy.c \
	ft_strlen.c \
	ft_strmapi.c \
	ft_strncmp.c \
	ft_strnstr.c \
	ft_strrchr.c \
	ft_strtrim.c \
	ft_substr.c \
	ft_tolower.c \
	ft_toupper.c

OBJS = $(SRCS:.c=.o)

BONUS_SRCS = ft_lstadd_back.c \
	ft_lstadd_front.c \
	ft_lstclear.c \
	ft_lstdelone.c \
	ft_lstiter.c \
	ft_lstlast.c \
	ft_lstmap.c \
	ft_lstnew.c \
	ft_lstsize.c

BONUS_OBJS = $(BONUS_SRCS:.c=.o)

GNL_SRCS = get_next_line/get_next_line_bonus.c \
	get_next_line/get_next_line_utils_bonus.c

GNL_OBJS = $(GNL_SRCS:.c=.o)

FT_PRINTF_SRCS = ft_printf/converter.c \
	ft_printf/ft_printf.c \
	ft_printf/handlers1.c \
	ft_printf/handlers2.c \
	ft_printf/parser.c \
	ft_printf/printers1.c \
	ft_printf/printers2.c \
	ft_printf/utils.c

FT_PRINTF_OBJS = $(FT_PRINTF_SRCS:.c=.o)

HEADER = libft.h

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

$(NAME): $(OBJS) $(BONUS_OBJS) $(GNL_OBJS) $(FT_PRINTF_OBJS)
	ar rcs $@ $^

clean:
	rm -f $(OBJS) $(BONUS_OBJS) $(GNL_OBJS) $(FT_PRINTF_OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
