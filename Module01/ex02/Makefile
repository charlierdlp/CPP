SRCS	= main.cpp
OBJS	= ${SRCS:.cpp=.o}
NAME	= brain
CC		= clang++
RM		= rm -f
CPPFLAGS	= -Wall -Werror -Wextra -std=c++98
SANITIZE = -g -fsanitize=address

%.o: %.cpp
	${CC} -c $< -o $@

${NAME}:	${OBJS}
			${CC} $(CPPFLAGS) $(OBJS) -o ${NAME}

all:		${NAME}

clean:
				${RM} ${OBJS}

fclean:		clean
				${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re