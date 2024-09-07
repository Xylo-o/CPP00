NAME := phonebook
CC := c++
CCFLAGS := -Werror -Wextra -Wall

SRCS := Main.cpp Contact.cpp PhoneBook.cpp

OBJS := $(SRCS:.cpp=.o)

all : $(NAME)

%.o :%.cpp compile_message
	@$(CC) $(CFLAGS) -c $< -o $@
	
$(NAME) : $(OBJS)
	@$(CC) $(CCFLAGS) $^ -o $@
	@echo "$(GREEN)Compiled successfully$(NC)"

clean :
	@rm -rf $(OBJS)
	@echo "$(YELLOW)Cleaned object files$(NC)"

fclean :
	@rm -rf $(OBJS) $(NAME)
	@echo "$(RED)Cleaned whole program$(NC)"

re : fclean all

compile_message:
	@echo "$(YELLOW)C$(GREEN)o$(RED)m$(YELLOW)p$(GREEN)i$(RED)l$(YELLOW)i$(GREEN)n$(RED)g$(YELLOW).$(GREEN).$(RED).$(NC)"

RED := \033[0;31m
GREEN := \033[0;32m
YELLOW := \033[0;33m
NC := \033[0m

.PHONY: all clean fclean re