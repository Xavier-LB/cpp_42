/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xlb <xlb@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 14:45:30 by xle-baux          #+#    #+#             */
/*   Updated: 2022/11/27 02:20:59 by xlb              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

// Contructors and Destructor --------------------------------------------------
Bureaucrat::Bureaucrat(void)
{
	std::cout << "(Bureaucrat) Default constructor" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string &name, int grade) : m_name(name), 
																m_grade(grade)
{
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	std::cout << "(Bureaucrat) Initial values constructor" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const & src) : m_name(src.m_name),
													m_grade(src.m_grade)
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

// Mandatory function ----------------------------------------------------------
void	Bureaucrat::signForm(Form & form) const
{
	try
	{
		form.beSigned(*this);
		std::cout << this->getName() << " signed " << form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << this->getName() << " couldn’t sign " << form.getName()
		<< " because " << e.what() << std::endl;
	}
}

void	Bureaucrat::decrementGrade()
{
	if (this->getGrade() < 150)
		this->m_grade++;
	else
		throw Bureaucrat::GradeTooLowException();
}

// Exeptions -------------------------------------------------------------------
const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade too high exception";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade too low exception";
}

// Overload --------------------------------------------------------------------
std::ostream &operator<<(std::ostream & out, Bureaucrat const & src)
{
	out << src.getName() << ", bureaucrat grade " << src.getGrade() << ".";
	return (out);
}