NAME		= megaphone

CC			= c++
CC_FLAGS	= -Wall -Wextra -Werror -std=c++98

SRCS		= srcs/megaphone.cpp

all	:	${NAME}

${NAME}	:
	${CC} ${CC_FLAGS} ${SRCS} -o ${NAME}

clean	:
	rm ${NAME}

fclean	: clean

re		: fclean all

.PHONY	: all clean fclean re