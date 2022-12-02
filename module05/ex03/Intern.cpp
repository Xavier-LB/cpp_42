/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-baux <xle-baux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 15:42:52 by xle-baux          #+#    #+#             */
/*   Updated: 2022/12/02 16:04:13 by xle-baux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

// Contructors and Destructor --------------------------------------------------
Intern::Intern()
{
	std::cout << "(Intern) Default constructor" << std::endl;
}

Intern::Intern(Intern const & src)
{
	std::cout << "(Intern) Copy constructor" << std::endl;
	*this = src;
}

Intern & Intern::operator=(Intern const & src)
{
	std::cout << "(Intern) Copy assignment operator" << std::endl;
	if (this != &src) {}
	return *this;
}

Intern::~Intern()
{
	std::cout << "(Form) Destructor" << std::endl;
}

Form * Intern::makeForm(std::string formName, std::string target)
{
    std::string formNames[] = {
        "robotomy request",
        "presidential pardon",
        "shrubbery creation"
    };
    Form*    forms[] = {
        new RobotomyRequestForm( target ),
        new PresidentialPardonForm( target ),
        new ShrubberyCreationForm( target )
    };
    
    for ( int i(0); i < 3; i++ ) {
        if ( formName == formNames[i] ) {
            std::cout << "Intern creates " << formName << std::endl;
            return forms[i];
        }
    }
    std::cout << "Intern cannot create " << formName << " form" << std::endl;
    return 0;
}