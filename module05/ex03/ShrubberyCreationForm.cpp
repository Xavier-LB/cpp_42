/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-baux <xle-baux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 14:30:25 by xle-baux          #+#    #+#             */
/*   Updated: 2022/12/09 12:24:19 by xle-baux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

// Contructors and Destructor --------------------------------------------------
ShrubberyCreationForm::ShrubberyCreationForm(void)
	: AForm("ShrubberyCreationForm", 145, 137), m_target("")
{
	std::cout << "(ShrubberyCreationForm) Default constructor" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target)
	:AForm("ShrubberyCreationForm", 145, 137), m_target(target)
{
	std::cout << "(ShrubberyCreationForm) Initial values constructor" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src)
	: AForm(src), m_target(src.m_target)
{
	std::cout << "(ShrubberyCreationForm) Copy constructor" << std::endl;
	*this = src;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & src)
{
	if (this != &src) {}
	std::cout << "(ShrubberyCreationForm) Copy assignment operator" << std::endl;
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "(ShrubberyCreationForm) Destructor" << std::endl;
}

// Secondary functions ---------------------------------------------------------

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
	std::ofstream formFile;
	formFile.open(std::string(this->getTarget() + "_shrubbery").c_str(),
									std::fstream::out | std::fstream::trunc);
	formFile << "      .              .              ;%     ;;      " << std::endl;
	formFile << "        ,           ,                :;%  %;       " << std::endl;
	formFile << "         :         ;                   :;%;'     .," << std::endl;
	formFile << ",.        %;     %;            ;        %;'    ,;  " << std::endl;
	formFile << "  ;       ;%;  %%;        ,     %;    ;%;    ,%'   " << std::endl;
	formFile << "   %;       %;%;      ,  ;       %;  ;%;   ,%;'    " << std::endl;
	formFile << "    ;%;      %;        ;%;        % ;%;  ,%;'      " << std::endl;
	formFile << "     `%;.     ;%;     %;'         `;%%;.%;'        " << std::endl;
	formFile << "      `:;%.    ;%%. %@;        %; ;@%;%'           " << std::endl;
	formFile << "         `:%;.  :;bd%;          %;@%;'             " << std::endl;
	formFile << "           `@%:.  :;%.         ;@@%;'              " << std::endl;
	formFile << "             `@%.  `;@%.      ;@@%;                " << std::endl;
	formFile << "               `@%%. `@%%    ;@@%;                 " << std::endl;
	formFile << "                 ;@%. :@%%  %@@%;                  " << std::endl;
	formFile << "                   %@bd%%%bd%%:;                   " << std::endl;
	formFile << "                     #@%%%%%:;;                    " << std::endl;
	formFile << "                     %@@%%%::;                     " << std::endl;
	formFile << "                     %@@@%(o);  . '                " << std::endl;
	formFile << "                     %@@@o%;:(.,'                  " << std::endl;
	formFile << "                 `.. %@@@o%::;                     " << std::endl;
	formFile << "                    `)@@@o%::;                     " << std::endl;
	formFile << "                     %@@(o)::;                     " << std::endl;
	formFile << "                    .%@@@@%::;                     " << std::endl;
	formFile << "                    ;%@@@@%::;.                    " << std::endl;
	formFile << "                   ;%@@@@%%:;;;.                   " << std::endl;
	formFile << "               ...;%@@@@@%%:;;;;,..                " << std::endl;
	formFile.close();
}


// Getters ---------------------------------------------------------------------
const std::string & ShrubberyCreationForm::getTarget() const
{
	return (this->m_target);
}