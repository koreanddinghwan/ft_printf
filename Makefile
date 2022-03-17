CC = gcc
NAME = libftprintf.a
INCS = /includes/
DIR = /srcs/
SRCS = 
OBJS = $(SRCS:.c=.o)
BONUS_SRCS = 
BONUS_OBJS = $(BONUS_SRCS:.c=.o)
CFLAGS = -Wall -Wextra -Werror -c

all : $(NAME)

%.o : %.c
	@$(CC) $(CFLAGS) $< -o $(<:.c=.o) -I .
	@ar rc $(NAME) $@

$(NAME) : $(OBJS)

bonus : $(BONUS_OBJS) $(OBJS)

fclean : clean
	@rm -f $(NAME)

clean :
	@rm -f $(OBJS) $(BONUS_OBJS)

re : fclean all

.PHONY: all clean fclean re 
