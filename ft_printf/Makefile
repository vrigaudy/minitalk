
NAME		= libftprintf.a
OBJ			= ${SRC:.c=.o}
CC 			= cc
CC_FLAGS 	= -Wall -Wextra -Werror
SRC			= ft_printf.c ft_dispatch.c ft_putchar_pf.c ft_putstr_pf.c\
			  ft_putnbr_pf.c ft_putnbr_base_pf.c ft_strlen_pf.c\
			  ft_putnbru_pf.c 

.c.o:
			${CC} ${CC_FLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJ}
			ar rcs ${NAME} ${OBJ}

all:		${NAME}

clean:
			rm -f ${OBJ}

fclean:		clean
			rm -f ${NAME}

re:			fclean all

.PHONY:		all bonus clean fclean re
