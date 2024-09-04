NAME := megaphone
CC := c++
CCFLAGS := -Werror -Wextra -Wall
SRC := megaphone.cpp
OBJ := $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(CCFLAGS) $^ -o $@
	@echo "Compiled successfully"

%.o: %.cpp
	@echo "Compiling ..."
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@echo "Cleaning the object files"
	@rm -rf $(OBJ)

fclean:
	@echo "Cleaning the whole program"
	@rm -rf $(OBJ) $(NAME)

re: fclean all

.PHONY: all clean fclean re