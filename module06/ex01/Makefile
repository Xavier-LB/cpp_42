# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: xle-baux <xle-baux@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/07 16:34:47 by xle-baux          #+#    #+#              #
#    Updated: 2022/12/07 16:34:48 by xle-baux         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= Serialization

SRCS	= main.cpp

OBJS	= ${SRCS:.cpp=.o}

CXX		= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98

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
