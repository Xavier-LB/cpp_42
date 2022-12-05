/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-baux <xle-baux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 15:42:52 by xle-baux          #+#    #+#             */
/*   Updated: 2022/12/05 20:46:14 by xle-baux         ###   ########.fr       */
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

Form*    Intern::createShrubberyCreationForm(std::string const & target) const {
    return new ShrubberyCreationForm(target);
}

Form*    Intern::createRobotomyRequestForm(std::string const & target) const {
    return new RobotomyRequestForm(target);
}

Form*    Intern::createPresidentialPardonForm(std::string const & target) const {
    return new PresidentialPardonForm(target);
}

Form* Intern::makeForm(const std::string& form, const std::string& target) const
{
    std::string formList[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
    Form* (Intern::*funcList[3])(const std::string&) const = \
        {&Intern::createShrubberyCreationForm, \
        &Intern::createRobotomyRequestForm, \
        &Intern::createPresidentialPardonForm};

    for (int i = 0; i < 3; ++i)
    {
        if (form == formList[i])
        {
			std::cout << "Intern creates " << form << std::endl;
            return (this->*funcList[i])(target);
        }
    }
	throw Intern::UnknowFormException();
    std::cerr << "There is no form with that name: " << form << std::endl;
    return NULL;
}

const char*    Intern::UnknowFormException::what() const throw() {
    return ("Intern: Can't find the requested form!");
}