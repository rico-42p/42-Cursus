LIBC = Fonction/ft_putchar_fd.c Fonction/ft_putchar_len.c \
		Fonction/ft_puthexa.c Fonction/ft_putnbr_fd.c \
		Fonction/ft_putptr.c Fonction/ft_putunbr.c \
		Fonction/ft_strlen.c ft_printf.c
SRCS = ${LIBC}
OBJS = ${SRCS:.c=.o}
NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror -I ./
%.o: %.c
	${CC} ${CFLAGS} -c $< -o $@
${NAME}: ${OBJS}
	ar -rsc ${NAME} ${OBJS}
all: $(NAME)
clean:
	rm -f ${OBJS}
fclean: clean
	rm -f ${NAME}
re: fclean all
.PHONY: all clean fclean re