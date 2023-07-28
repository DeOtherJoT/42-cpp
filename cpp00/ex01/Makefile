#EXEC#
NAME	= phonebook

#COMMANDS#
CC		= c++ -Wall -Werror -Wextra -std=c++98
FSAN	= -fsanitize=address -g3
INC		= -Iincludes/
RM		= rm -rf

#PATHS#
SRC_DIR	= srcs/
SRCS	= $(addprefix $(SRC_DIR), main.cpp Contact.cpp PhoneBook.cpp utils.cpp)
OBJS	= $(SRCS:.cpp=.o)

#RECIPES#
all	:	$(NAME)

%.o	:	%.cpp
	$(CC) $(INC) -c $< -o $@

$(NAME)	:	$(OBJS)
	$(CC) $(INC) -o $(NAME) $(OBJS)

clean	:
	$(RM) $(OBJS)

fclean	: clean
	$(RM) $(NAME)

re	: fclean all

.PHONY	: all clean fclean re