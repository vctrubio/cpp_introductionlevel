SRCS	= $(wildcard *.cpp) 

OBJS	= $(SRCS:.c=.o)

GCC		= g++ --std=c++14

RM		= rm -f

NAME 	= poker.a



all: $(OBJS) $(SRCS)
	$(GCC) $(SRCS) -o $(NAME)


clean:
	$(RM) $(OBJS) $(NAME)
