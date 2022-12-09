# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: xle-baux <xle-baux@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/08 21:25:59 by xlb               #+#    #+#              #
#    Updated: 2022/12/09 17:26:35 by xle-baux         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= array

SRCS	= main.cpp

OBJS	= ${SRCS:.cpp=.o}

CXX		= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98

RM		= rm -f

VALGRING = valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes --log-file=valgrind-out.txt ./
VALGRING_OUT = valgrind-out.txt

.cpp.o:		
				${CXX} ${FLAGS} -c $< -o ${<:.cpp=.o}
				
all:		${NAME}

${NAME}:	${OBJS}
				${CXX} ${FLAGS} -o ${NAME} ${OBJS}

run:		clean all
				make clean && clear && ${VALGRING}${NAME}

clean:		
				${RM} ${OBJS}

fclean:		clean
				${RM} ${NAME} ${VALGRING_OUT}

re:			fclean all

.PHONY:		all clean fclean re
