# EXECUTABLE #

NAME	= ref_vs_ptr

# COMMAND #

CC		= c++ -Wall -Wextra -Werror -std=c++98 -pedantic

# SOURCE FILES #

SRCS	= main.cpp

# RECIPES #

all : $(NAME)

$(NAME) :
	$(CC) $(SRCS) -o $(NAME)

fclean	:
	rm $(NAME)

re	: fclean all

.PHONY	: all fclean re