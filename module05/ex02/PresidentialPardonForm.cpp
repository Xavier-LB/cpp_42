/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-baux <xle-baux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 14:32:01 by xle-baux          #+#    #+#             */
/*   Updated: 2022/12/09 12:17:50 by xle-baux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

// Contructors and Destructor --------------------------------------------------
PresidentialPardonForm::PresidentialPardonForm(void)
	: AForm("PresidentialPardonForm", 25, 5), m_target("")
{
	std::cout << "(PresidentialPardonForm) Default constructor" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string target)
	:AForm("PresidentialPardonForm", 25, 5), m_target(target)
{
	std::cout << "(PresidentialPardonForm) Initial values constructor" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src)
	: AForm(src), m_target(src.m_target)
{
	std::cout << "(PresidentialPardonForm) Copy constructor" << std::endl;
	*this = src;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & src)
{
	if (this != &src) {}
	std::cout << "(PresidentialPardonForm) Copy assignment operator" << std::endl;
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "(PresidentialPardonForm) Destructor" << std::endl;
}

// Secondary functions ---------------------------------------------------------
void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > this->getExcAuth())
	{
		throw GradeTooLowException();
	}
	else if (this->getSigned() == false)
	{
		throw ExecuteUnsignedException();
	}
	std::cout << this->getTarget() << " a été pardonnée par Zaphod Beeblebrox." << std::endl;
}


// Getters ---------------------------------------------------------------------
const std::string & PresidentialPardonForm::getTarget() const
{
	return (this->m_target);
}