CC = clang++
FLAGS = -Wall -Wextra -Werror -std=c++98
FLAGS =
RM = rm -f

NAME = Zombie
SRCS = $(wildcard *.cpp)
OBJS = $(SRCS:.cpp=.o)

all = $(NAME)

$(NAME): $(SRCS)
		$(CC) $(SRCS) $(FLAGS) -o $(NAME)

clean:
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re
