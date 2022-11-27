/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xlb <xlb@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 22:01:22 by xlb               #+#    #+#             */
/*   Updated: 2022/11/27 02:17:14 by xlb              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

// Contructors and Destructor --------------------------------------------------
Form::Form() : m_name(""),
				m_signed(false),
				m_singAuth(0),
				m_excAuth(0)
{
	std::cout << "(Form) Default constructor" << std::endl;
}

Form::Form(std::string const &name, int singAuth, int excAuth) : m_name(name),
																m_signed(false),
																m_singAuth(singAuth),
																m_excAuth(excAuth)
{
	if (singAuth < 1 || excAuth < 1)
		throw GradeTooHighException();
	else if (singAuth > 150 || excAuth > 150)
		throw GradeTooLowException();
	std::cout << "(Form) Initial values constructor" << std::endl;
}

Form::Form(Form const & src) : m_name(src.m_name),
								m_signed(src.m_signed),
								m_singAuth(src.m_singAuth),
								m_excAuth(src.m_excAuth)
{
	std::cout << "(Form) Copy constructor" << std::endl;
	*this = src;
}

Form & Form::operator=(Form const & src)
{
	std::cout << "(Form) Copy assignment operator" << std::endl;
	if (this != &src)
	{
		this->m_signed = src.m_signed;
		this->m_singAuth = src.m_singAuth;
		this->m_excAuth = src.m_excAuth;
	}
	return *this;
}

Form::~Form()
{
	std::cout << "(Form) Destructor" << std::endl;
}


// Getters ---------------------------------------------------------------------
const std::string Form::getName() const
{
	return (this->m_name);
}

bool Form::getSigned() const
{
	return (this->m_signed);
}

int Form::getSingAuth() const
{
	return (this->m_singAuth);
}

int Form::getExcAuth() const
{
	return (this->m_excAuth);
}

// Mandatory function ----------------------------------------------------------
void Form::beSigned(const Bureaucrat & bureaucrat)
{
	if (bureaucrat.getGrade() <= this->getSingAuth())
		this->m_signed = true;
	else
		throw Form::GradeTooLowException();
}

// Exeptions -------------------------------------------------------------------
const char* Form::GradeTooHighException::what() const throw()
{
	return "Grade too high exception";
}

const char* Form::GradeTooLowException::what() const throw()
{
	return "Grade too low exception";
}

// Overload --------------------------------------------------------------------
std::ostream &operator<<(std::ostream & out, Form const & src)
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