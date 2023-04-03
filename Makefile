NAME = libftprintf.a

CC = gcc

FLAGS = -Wall -Wextra -Werror

SRCS = ft_printf.c ft_printchar.c ft_printstr.c ft_printptr.c ft_printnbr.c ft_printunsint.c ft_printhex.c ft_printpercent.c ft_putchar_fd.c ft_itoa.c

OBJS = $(SRCS:.c=.o)

RM = rm -f

$(NAME):$(OBJS)
	$(CC) $(FLAGS) -c $(SRCS)
	ar rcs $(NAME) $(OBJS) ft_printf.h

all:$(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

