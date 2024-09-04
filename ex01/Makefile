NAME := phonebook
CC := c++
CCFLAGS := -Werror -Wextra -Wall
SRCS :=
OBJS := $(SRCS:.cpp=.o)

all : $(NAME)

clean :
	rm -rf $(OBJS)

fclean :
	rm -rf $(OBJS) $(NAME)

re : fclean all

.PHONY: all clean fclean re