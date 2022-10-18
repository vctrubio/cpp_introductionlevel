CC = clang++
#FLAGS = -Wall -Wextra -Werror
FLAGS =
RM = rm -f

NAME = iter
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
