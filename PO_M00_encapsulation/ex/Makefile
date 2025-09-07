NAME		=	DivideAndConquer

CXX			=	c++

CXXFLAGS	=	-Wall -Wextra -Werror --std=c++98

RM			=	rm -f

SRCS		=	DivideAndRule.cpp

OBJS_FILE	=	$(SRCS:.cpp=.o)

INCL		=	DivideAndRule.hpp

.c.o:
			$(CXX) $(CXXFLAGS) -g -c $< -o $(<:.cpp=.o)

$(NAME):	$(OBJS_FILE)
			$(CXX) $(CXXFLAGS) $(OBJS_FILE) -o $(NAME)

all:		$(NAME)

clean:
			$(RM) $(OBJS_FILE)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re