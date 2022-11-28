/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-baux <xle-baux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 14:30:25 by xle-baux          #+#    #+#             */
/*   Updated: 2022/11/28 19:17:04 by xle-baux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

// Contructors and Destructor --------------------------------------------------
ShrubberyCreationForm::ShrubberyCreationForm(void)
	: Form("ShrubberyCreationForm", 145, 137), m_target("")
{
	std::cout << "(ShrubberyCreationForm) Default constructor" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target)
	:Form("ShrubberyCreationForm", 145, 137), m_target(target)
{
	std::cout << "(ShrubberyCreationForm) Initial values constructor" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src)
	: Form("ShrubberyCreationForm", 145, 137)
{
	std::cout << "(ShrubberyCreationForm) Copy constructor" << std::endl;
	*this = src;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & src)
{
	if (this != &src)
	{
		
	}
	std::cout << "(ShrubberyCreationForm) Copy assignment operator" << std::endl;
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "(ShrubberyCreationForm) Destructor" << std::endl;
}

// Secondary functions ---------------------------------------------------------
void ShrubberyCreationForm::action(void) const
{
	std::cout << "ShrubberyCreationForm Exc!!!" << std::endl;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > this->getExcAuth())
	{
		throw GradeTooLowException();
	}
	else if (this->getSigned() == false)
	{
		throw ExecuteUnsignedException();
	}
	else
		action();
}


// Getters ---------------------------------------------------------------------
const std::string & ShrubberyCreationForm::getTarget() const
{
	return (this->m_target);
}