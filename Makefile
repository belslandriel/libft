# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: miclandr <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/04 21:24:31 by miclandr          #+#    #+#              #
#    Updated: 2024/12/10 17:29:03 by miclandr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc 
CCFLAGS = -Wall -Wextra -Werror 
RM = rm -rf
INC = libft.h


MY_SOURCES =ft_isdigit.c\
						ft_isalnum.c\
						ft_isalpha.c\
						ft_isascii.c\
						ft_isprint.c\
						ft_strlen.c\
						ft_memset.c\
						ft_bzero.c\
						ft_memcpy.c\
						ft_memmove.c\
						ft_strlcpy.c\
						ft_strlcat.c\
						ft_toupper.c\
						ft_tolower.c\
						ft_strchr.c\
						ft_strncmp.c\
						ft_memchr.c\
						ft_memcmp.c\
						ft_strnstr.c\
						ft_atoi.c\
						ft_calloc.c\
						ft_strdup.c\
						ft_substr.c\
						ft_strrchr.c\
						ft_strjoin.c\
						ft_strtrim.c\
						ft_putchar_fd.c\
						ft_putstr_fd.c\
						ft_putendl_fd.c\
						ft_putnbr_fd.c\
						ft_strmapi.c\
						ft_striteri.c\
						ft_split.c\
						ft_itoa.c

OBJS = $(MY_SOURCES:.c=.o)

$(NAME) : $(OBJS)
	ar crs $(NAME) $(OBJS)

all: $(NAME)

%.o : %.c $(INC)
	$(CC) $(CCFLAGS) -c -o $@ $<
clean:
	$(RM) $(OBJS)
fclean: clean
	rm -f $(NAME)
re: fclean all
.PHONY: all clean fclean re
