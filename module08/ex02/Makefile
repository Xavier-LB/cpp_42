# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: xle-baux <xle-baux@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/11 16:51:54 by xle-baux          #+#    #+#              #
#    Updated: 2022/12/11 16:59:13 by xle-baux         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= MutantStack

SRCS	= main.cpp

OBJS	= ${SRCS:.cpp=.o}

CXX		= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98

RM		= rm -f

VALGRING = valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes --log-file=valgrind-out.txt ./
VALGRING_OUT = valgrind-out.txt

.cpp.o:		
				${CXX} ${CXXFLAGS} -c $< -o ${<:.cpp=.o}
				
all:		${NAME}

${NAME}:	${OBJS}
				${CXX} ${CXXFLAGS} -o ${NAME} ${OBJS}

run:		clean all
				make clean && clear && ./${NAME} > ${VALGRING_OUT}

debug:		clean all
				make clean && clear && ${VALGRING}${NAME}

clean:		
				${RM} ${OBJS}

fclean:		clean
				${RM} ${NAME} ${VALGRING_OUT}

re:			fclean all

.PHONY:		all clean fclean re
