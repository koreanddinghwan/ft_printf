# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: myukang <myukang@student.42.kr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/18 00:43:51 by myukang           #+#    #+#              #
#    Updated: 2022/03/18 06:27:25 by myukang          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror -c
NAME = libftprintf.a

#LIBFT
LIBFT_DIR = ./libft/
LIBFT_SRCS = ft_isdigit.c ft_isalpha.c ft_isalnum.c ft_isascii.c ft_strlen.c ft_isprint.c ft_toupper.c ft_tolower.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_strlcat.c ft_strlcpy.c ft_strncmp.c ft_strdup.c ft_atoi.c ft_strchr.c ft_strrchr.c ft_strnstr.c ft_calloc.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_strcmp.c ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c ft_putnbr_unsigned.c
LIBFT_O = $(LIBFT_SRCS:.c=.o)
LIBFT_OBJS = $(addprefix $(LIBFT_DIR), $(LIBFT_O))

#PRINTF
SRCS_DIR = ./printf/
SRCS_C = ft_printf.c ft_putnbr_hex.c ft_print_pointer.c
OBJS_O = $(SRCS_C:.c=.o)
SRCS = $(addprefix $(SRCS_DIR), $(SRCS_C)) 
OBJS = $(addprefix $(SRCS_DIR), $(OBJS_O)) 

#BONUS
BONUS = bonus
BONUS_SRCS = 
BONUS_OBJS = $(BONUS_SRCS:.c=.o)

ifdef BONUS_MADE
	OBJ_FILES = $(LIBFT_OBJS) $(OBJS) $(BONUS_OBJS)
else
	OBJ_FILES = $(LIBFT_OBJS) $(OBJS) 
endif

all : $(NAME)

$(NAME) : $(OBJ_FILES)
	ar rsc $(NAME) $^

%.o : %.c
	$(CC) $(CFLAGS) -g $< -o $@ -I .

$(BONUS) : 
	make BONUS_MADE=1 all

fclean : clean
	rm -f $(NAME) $(LIBFT_OBJS) $(OBJS) $(BONUS_OBJS)
	BONUS_MADE=0

clean :
	rm -f $(LIBFT_OBJS) $(OBJS) $(BONUS_OBJS)
	BONUS_MADE=0

re : fclean all

.PHONY: all clean fclean re 
