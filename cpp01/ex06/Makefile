# EXEC #

NAME	= harlFilter

# COMMANDS #

C++		= c++ -Wall -Wextra -Werror -std=c++98
INC		= -Iincludes/
RM		= rm -rf

# PATHS #

SRC_DIR	= srcs/

# SOURCE FILES #

SRCS	= $(addprefix $(SRC_DIR), Harl.cpp main.cpp)
OBJS	= $(SRCS:.cpp=.o)

# RECIPES #

all	: $(NAME)

%.o	: %.cpp
	$(C++) $(INC) -c $< -o $@

$(NAME)	: $(OBJS)
	$(C++) $(OBJS) -o $(NAME)

clean	:
	$(RM) $(OBJS)

fclean	: clean
	$(RM) $(NAME)

re	: fclean all

.PHONY	: all clean fclean re