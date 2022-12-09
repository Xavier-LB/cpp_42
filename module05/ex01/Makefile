# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: xle-baux <xle-baux@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/25 14:45:26 by xle-baux          #+#    #+#              #
#    Updated: 2022/12/09 10:40:46 by xle-baux         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= Bureaucrat

SRCS	= main.cpp Bureaucrat.cpp Form.cpp

OBJS	= ${SRCS:.cpp=.o}

CXX		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98

RM		= rm -f

.cpp.o:		
				${CXX} ${FLAGS} -c $< -o ${<:.cpp=.o}
				
all:		${NAME}

${NAME}:	${OBJS}
				${CXX} ${FLAGS} -o ${NAME} ${OBJS}

clean:		
				${RM} ${OBJS} "valgrind-out.txt"

fclean:		clean
				${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
