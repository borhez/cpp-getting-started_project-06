NAME= a.out
SRC= main.cpp
OBJ= $(SRC:%.cpp=%.o)
HEADERS= 
FLAGS= -g -Werror -Wextra -Wall
CC= c++ -std=c++98

.PHONY: all fclean clean re

all	:  $(NAME)

$(NAME)	: $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

%.o	: %.cpp $(HEADERS)
	$(CC) $(FLAGS) -c $< -o $@

clean	:
	rm -rf *.o
fclean	: clean
	rm -fr $(NAME)

re	: fclean all
