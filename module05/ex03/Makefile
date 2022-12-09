# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: xle-baux <xle-baux@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/25 14:45:26 by xle-baux          #+#    #+#              #
#    Updated: 2022/12/09 12:26:30 by xle-baux         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= Bureaucrat

SRCS	= main.cpp Bureaucrat.cpp AForm.cpp ShrubberyCreationForm.cpp \
			RobotomyRequestForm.cpp PresidentialPardonForm.cpp Intern.cpp

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
				${RM} ${OBJS} *"_shrubbery" "valgrind-out.txt"

fclean:		clean
				${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
