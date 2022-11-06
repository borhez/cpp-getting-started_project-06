NAME= a.out
SRC= main.cpp A.cpp B.cpp C.cpp Base.cpp
OBJ= $(SRC:%.cpp=%.o)
HEADERS= A.hpp B.hpp C.hpp Base.hpp
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
