# EXECUTABLE #

NAME	= zombie_horde

# COMMANDS #

CC		= c++ -Wall -Wextra -Werror -std=c++98
INC		= -Iincludes/
FSAN	= fsanitize=address -g3
RM		= rm -rf

# PATHS #
SRC_DIR	= srcs/

# SOURCE FILES #

SRCS	= $(addprefix $(SRC_DIR), main.cpp Zombie.cpp zombieHorde.cpp)
OBJS	= $(SRCS:.cpp=.o)

# RECIPES #

all	:	$(NAME)

%.o	:	%.cpp
	$(CC) $(INC) -c $< -o $@

$(NAME)	:	$(OBJS)
	$(CC) $(INC) $(OBJS) -o $(NAME)

clean	:
	$(RM) $(OBJS)

fclean	: clean
	$(RM) $(NAME)

re	:	fclean all

.PHONY	: all clean fclean re