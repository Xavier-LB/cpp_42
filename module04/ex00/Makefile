# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: xlb <xlb@student.42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/20 15:52:50 by xle-baux          #+#    #+#              #
#    Updated: 2022/11/20 19:27:14 by xlb              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= Animal

SRCS	= main.cpp Animal.cpp Dog.cpp Cat.cpp WrongCat.cpp WrongAnimal.cpp

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
				${RM} ${OBJS}

fclean:		clean
				${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
