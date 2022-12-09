/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-baux <xle-baux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 14:31:13 by xle-baux          #+#    #+#             */
/*   Updated: 2022/12/09 12:17:33 by xle-baux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

// Contructors and Destructor --------------------------------------------------
RobotomyRequestForm::RobotomyRequestForm(void)
	: AForm("RobotomyRequestForm", 72, 45), m_target("")
{
	std::cout << "(RobotomyRequestForm) Default constructor" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string target)
	:AForm("RobotomyRequestForm", 72, 45), m_target(target)
{
	std::cout << "(RobotomyRequestForm) Initial values constructor" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src)
	: AForm(src), m_target(src.m_target)
{
	std::cout << "(RobotomyRequestForm) Copy constructor" << std::endl;
	*this = src;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & src)
{
	if (this != &src) {}
	std::cout << "(RobotomyRequestForm) Copy assignment operator" << std::endl;
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "(RobotomyRequestForm) Destructor" << std::endl;
}

// Secondary functions ---------------------------------------------------------
void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > this->getExcAuth())
	{
		throw GradeTooLowException();
	}
	else if (this->getSigned() == false)
	{
		throw ExecuteUnsignedException();
	}
	std::time_t t = std::time(0);
	if ( t % 2 == 0 )
		std::cout << "BZZZZZT! " << this->getTarget() << " has been robotomized!" << std::endl;
	else
		std::cout << "Robotomy failed! " << this->getTarget() << " is still alive." << std::endl;

}


// Getters ---------------------------------------------------------------------
const std::string & RobotomyRequestForm::getTarget() const
{
	return (this->m_target);
}