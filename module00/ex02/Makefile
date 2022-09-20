# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: xle-baux <xle-baux@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/18 17:49:24 by xle-baux          #+#    #+#              #
#    Updated: 2022/09/20 18:48:47 by xle-baux         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= Account

SRCS	= Account.cpp tests.cpp

OBJS	= ${SRCS:.cpp=.o}

CXX		= c++
FLAGS	=  -std=c++98

RM		= rm -f


.cpp.o:		
				${CXX} ${FLAGS} -c $< -o ${<:.cpp=.o}

all:		${NAME}

${NAME}:	${OBJS}
				${CXX} ${FLAGS} -o ${NAME} ${OBJS}

clean:		
				${RM} ${OBJS}

fclean:		clean
				${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re