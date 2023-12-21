SRC =		ft_fprintf.c \
			ft_fprintf_printer.c \
			ft_fprintf_hexa.c \
			ft_fprintf_utils.c	

OBJ =		${SRC:.c=.o}

NAME =		libftfprintf.a

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
