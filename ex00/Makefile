NAME := megaphone
CC := c++
CCFLAGS := -Werror -Wextra -Wall
SRC := megaphone.cpp
OBJ := $(SRC:.cpp=.o)

all: $(NAME)
	@echo "Compiled successfully"

$(OBJ): $(SRC)
	@echo "Compiling object files..."
	@$(CC) $(CCFLAGS) -c $(SRC) -o $(OBJ)

$(NAME): $(OBJ)
	@echo "Compiling..."
	@$(CC) $(CCFLAGS) -c $(SRC) -o $(NAME)

clean:
	@echo "Cleaning object files"
	@rm -rf $(OBJ)

fclean:
	@echo "Cleaning whole program"
	@rm -rf $(OBJ) $(NAME)

re: fclean all

.PHONY: all clean fclean re