NAME = libftprintf.a

CC = gcc

CFLAGS = -Wall -Werror -Wextra -c

CFLAGSR = -Wall -Werror -Wextra

FUNCTIONS =	ft_printf.c \
			ft_format_hexa.c \
			ft_format_int.c \
			ft_format_string_char.c \
			ft_format_unsigned.c \

			
OBJECTS = ${FUNCTIONS:.c=.o}

all: ${NAME}

%o: %c
	${CC} ${CFLAGS} $< -o $@

${NAME}: ${OBJECTS}
	ar rc ${NAME} ${OBJECTS}

clean: 
	rm -f ${OBJECTS} 2> /dev/null

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all re clean fclean
