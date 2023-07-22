NAME		= megaphone

CC			= c++
CC_FLAGS	= -Wall -Wextra -Werror -std=c++98

SRCS		= megaphone.cpp

all	:	${NAME}

${NAME}	:
	${CC} ${CC_FLAGS} ${SRCS} -o ${NAME}

clean	:
	rm ${NAME}

re		: clean all

.PHONY	: clean re megaphone