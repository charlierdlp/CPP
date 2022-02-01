SRCS	= main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp
OBJS	= ${SRCS:.cpp=.o}
NAME	= FragTrap
CC		= clang++
RM		= rm -f
CPPFLAGS	= -Wall -Werror -Wextra -std=c++98 -Wshadow -Wno-shadow
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