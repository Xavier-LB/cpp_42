/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-baux <xle-baux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 14:45:30 by xle-baux          #+#    #+#             */
/*   Updated: 2022/11/25 18:55:04 by xle-baux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

// Contructors and Destructor --------------------------------------------------
Bureaucrat::Bureaucrat(void)
{
	std::cout << "(Bureaucrat) Default constructor" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : m_name(name), m_grade(grade)
{
	std::cout << "(Bureaucrat) Initial values constructor" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const & src)
{
	std::cout << "(Bureaucrat) Copy constructor" << std::endl;
	*this = src;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & src)
{
	std::cout << "(Bureaucrat) Copy assignment operator" << std::endl;
	if (this != &src)
	{
		this->m_grade = src.m_grade;
	}
	return *this;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "(Bureaucrat) Destructor" << std::endl;
}


// Getters ---------------------------------------------------------------------
const std::string Bureaucrat::getName() const
{
	return (this->m_name);
}

int	Bureaucrat::getGrade() const
{
	return (this->m_grade);
}


// Secondary functions ---------------------------------------------------------
void	Bureaucrat::incrementGrade()
{
	if (this->getGrade() > 1)
		this->m_grade--;
	else
		throw Bureaucrat::GradeTooHighException();
}

void	Bureaucrat::decrementGrade()
{
	if (this->getGrade() < 150)
		this->m_grade++;
	else
		throw Bureaucrat::GradeTooLowException();
}


std::ostream &operator<<(std::ostream & out, Bureaucrat const & src)
{
	out << src.getName() << ", bureaucrat grade " << src.getGrade() << "." << std::endl;
	return (out);
}