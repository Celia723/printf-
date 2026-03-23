#name bibliotec
NAME = libftprintf.a

#compilator and flags
CC = cc
CFLAGS =-Wall -Wextra -Werror

#files
SRC = ft_printf.c \
	ft_putchar.c \
ft_puthex.c \
ft_puthex_mayus.c \
ft_putin.c \
ft_putstr.c \
ft_putinpositivo.c \
ft_putpun.c 

#Termination
OBJ = $(SRC:.c=.o)

#header fille
INCLUDE = ft_printf.h

#create libary and delete files
AR = ar rcs
RM = rm -f

all: $(NAME)
#bonus: $(NAME)

$(NAME): $(OBJ)
	$(AR) $@ $^

#.c to .o
%.o: %.c $(INCLUDE)
	$(CC) $(CFLAGS) -c -o $@ $<

#eliminate created filles
clean:
	$(RM) $(OBJ)

#Eliminate files .o and .a
fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re