/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-baux <xle-baux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 22:01:22 by xlb               #+#    #+#             */
/*   Updated: 2022/12/09 12:13:30 by xle-baux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

// Contructors and Destructor --------------------------------------------------
AForm::AForm() : m_name(""),
				m_signed(false),
				m_singAuth(0),
				m_excAuth(0)
{
	std::cout << "(AForm) Default constructor" << std::endl;
}

AForm::AForm(std::string const &name, int singAuth, int excAuth) : m_name(name),
																m_signed(false),
																m_singAuth(singAuth),
																m_excAuth(excAuth)
{
	if (singAuth < 1 || excAuth < 1)
		throw GradeTooHighException();
	else if (singAuth > 150 || excAuth > 150)
		throw GradeTooLowException();
	std::cout << "(AForm) Initial values constructor" << std::endl;
}

AForm::AForm(AForm const & src) : m_name(src.m_name),
								m_signed(src.m_signed),
								m_singAuth(src.m_singAuth),
								m_excAuth(src.m_excAuth)
{
	std::cout << "(AForm) Copy constructor" << std::endl;
	*this = src;
}

AForm & AForm::operator=(AForm const & src)
{
	std::cout << "(AForm) Copy assignment operator" << std::endl;
	if (this != &src)
	{
		this->m_signed = src.m_signed;
		this->m_singAuth = src.m_singAuth;
		this->m_excAuth = src.m_excAuth;
	}
	return *this;
}

AForm::~AForm()
{
	std::cout << "(AForm) Destructor" << std::endl;
}


// Getters ---------------------------------------------------------------------
const std::string AForm::getName() const
{
	return (this->m_name);
}

bool AForm::getSigned() const
{
	return (this->m_signed);
}

int AForm::getSingAuth() const
{
	return (this->m_singAuth);
}

int AForm::getExcAuth() const
{
	return (this->m_excAuth);
}

// Mandatory function ----------------------------------------------------------
void AForm::beSigned(const Bureaucrat & bureaucrat)
{
	if (bureaucrat.getGrade() <= this->getSingAuth())
		this->m_signed = true;
	else
		throw AForm::GradeTooLowException();
}

// Exeptions -------------------------------------------------------------------
const char* AForm::GradeTooHighException::what() const throw()
{
	return "Grade too high exception";
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return "Grade too low exception";
}

const char* AForm::ExecuteUnsignedException::what() const throw()
{
	return "Execute unsigned exception";
}

// Overload --------------------------------------------------------------------
std::ostream &operator<<(std::ostream & out, AForm const & src)
{
	std::string boolSigned;
	
	if (src.getSigned() == true)
		boolSigned = "Yes";
	else
		boolSigned = "No";
	out << "Form name: " << src.getName() << std::endl
	<< "Signed: " << boolSigned << std::endl
	<< "Grade sign authorization: " << src.getSingAuth() << std::endl
	<< "Grade execution authorization: " << src.getExcAuth() << std::endl;
	
	return out;
}

