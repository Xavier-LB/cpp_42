/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-baux <xle-baux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 15:42:52 by xle-baux          #+#    #+#             */
/*   Updated: 2022/12/04 18:49:32 by xle-baux         ###   ########.fr       */
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

const std::string    Intern::_formName[] = {"shrubbery creation", "robotmy request",
                                                    "presidential pardon"};
Intern::functions[] = { &Intern::createShrubberyCreationForm, 
                                                        &Intern::createRobotomyRequestForm,
                                                        &Intern::createPresidentialPardonForm };

// Form * Intern::makeForm(std::string formName, std::string target)
// {
//     std::string formNames[] = {
//         "robotomy request",
//         "presidential pardon",
//         "shrubbery creation"
//     };
//     Form*    forms[] = {
//         new RobotomyRequestForm( target ),
//         new PresidentialPardonForm( target ),
//         new ShrubberyCreationForm( target )
//     };
    
//     for ( int i(0); i < 3; i++ ) {
//         if ( formName == formNames[i] ) {
//             std::cout << "Intern creates " << formName << std::endl;
//             return forms[i];
//         }
//     }
//     std::cout << "Intern cannot create " << formName << " form" << std::endl;
//     return 0;
// }

Form* Intern::makeForm(std::string const & formName, std::string const & target) {
    std::string    target(target);

    if (target.empty() || target.size() == 0)
        target = "Unknow";

    for (int i = 0; i < 3; i++)
        if (formName.compare(this->_formName[i]) == 0)
            return (this->*_functions[i])(target);
    
    throw Intern::UnknowFormException();
}

const char*    Intern::UnknowFormException::what() const throw() {
    return ("Intern: Can't find the requested form!");
}

Form*    Intern::createShrubberyCreationForm(std::string const target) const {
    return new ShrubberyCreationForm(target);
}

Form*    Intern::createRobotomyRequestForm(std::string const target) const {
    return new RobotomyRequestForm(target);
}

Form*    Intern::createPresidentialPardonForm(std::string const target) const {
    return new PresidentialPardonForm(target);
}


// #include <iostream>
// #include "Intern.hpp"
// #include "ShrubberyCreationForm.hpp"
// #include "RobotomyRequestForm.hpp"
// #include "PresidentialPardonForm.hpp"

// const std::string    Intern::_formName[FORM_NUMBERS] = {"shrubbery creation", "robotmy request",
//                                                     "presidential pardon"};
// const functions        Intern::_functions[FORM_NUMBERS] = { &Intern::createShrubberyCreationForm, 
//                                                         &Intern::createRobotomyRequestForm,
//                                                         &Intern::createPresidentialPardonForm };

// Intern::Intern() {}

// Intern::Intern(Intern const & ref) {
//     (void)ref;
// }

// Intern::~Intern() {}

// Intern&    Intern::operator=(Intern const & ref) {
//     (void)ref;
//     return *this;
// }

// AForm*    Intern::makeForm(std::string const & formName, std::string const & formTarget) {
//     std::string    target(formTarget);

//     if (target.empty() || target.size() == 0)
//         target = "Unknow";

//     for (int i = 0; i < FORM_NUMBERS; i++)
//         if (formName.compare(this->_formName[i]) == 0)
//             return (this->*_functions[i])(target);
    
//     throw Intern::UnknowFormException();
// }

// const char*    Intern::UnknowFormException::what() const throw() {
//     return ("Intern: Can't find the requested form!");
// }

// Form*    Intern::createShrubberyCreationForm(std::string const target) const {
//     return new ShrubberyCreationForm(target);
// }

// Form*    Intern::createRobotomyRequestForm(std::string const target) const {
//     return new RobotomyRequestForm(target);
// }

// Form*    Intern::createPresidentialPardonForm(std::string const target) const {
//     return new PresidentialPardonForm(target);
// }