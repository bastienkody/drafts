SRC =		ft_printf.c \
			ft_printf_printer.c \
			ft_printf_hexa.c \
			ft_printf_utils.c	

OBJ =		${SRC:.c=.o}

NAME =		libftprintf.a

CC =		gcc

CFLAGS =	-Wall -Wextra -Werror

.c.o:	
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	libft ${OBJ}
		ar rcs ${NAME} ${OBJ} 

all:		${NAME}

libft:	
		make -C libft/
		cp libft/libft.a ./
		mv libft.a ${NAME}

clean:
		rm -rf ${OBJ} 
		make clean -C libft/

fclean:		clean
		rm -rf ${NAME}
		make fclean -C libft/

re:		fclean all

.PHONY:		all clean fclean re libft
