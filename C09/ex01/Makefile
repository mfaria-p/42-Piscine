NAME = libft.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

SOURCES = srcs/ft_putchar.c \
	  srcs/ft_swap.c \
	  srcs/ft_putstr.c \
	  srcs/ft_strlen.c \
	  srcs/ft_strcmp.c

OBJECTS = $(SOURCES:.c=.o)

HEADER = includes

all:	$(NAME)

$(NAME): $(OBJECTS)
	ar rcs $@ $(OBJECTS)

%.o: %.c
	$(CC) $(CFLAGS) -I $(HEADER) -c $< -o $(<:.c=.o)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all
