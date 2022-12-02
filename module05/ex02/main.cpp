/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-baux <xle-baux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 14:45:33 by xle-baux          #+#    #+#             */
/*   Updated: 2022/12/02 15:10:09 by xle-baux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

void test1();

int main() {

  test1();
  return 0;
}

void test1()
{
	try
	{
		std::cout << "==================================================" << std::endl;
		std::cout << "|              ShrubberyCreationForm             |" << std::endl;
		std::cout << "|              Sign = 145 | Exc = 137            |" << std::endl;
		std::cout << "==================================================" << std::endl;

		Bureaucrat bureaucrat1("Jack(145)", 145);
		Bureaucrat bureaucrat2("Rick(137)", 137);
		ShrubberyCreationForm shrubberyCreationForm("Shrubbery");

		std::cout << "==================================================" << std::endl;
		
		std::cout << std::endl;
		std::cout << std::endl;

		std::cout << "-------------------- signForm --------------------" << std::endl;
		std::cout << "| ";
		bureaucrat1.signForm(shrubberyCreationForm);
		std::cout << "--------------------------------------------------" << std::endl;

		std::cout << std::endl;

		std::cout << "------------------- executeForm ------------------" << std::endl;
		std::cout << "| ";
		bureaucrat2.executeForm(shrubberyCreationForm);
		std::cout << "--------------------------------------------------" << std::endl;

		std::cout << std::endl;
		std::cout << std::endl;

		std::cout << "------------------- Destructor -------------------" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "==================================================" << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	try
	{
		std::cout << "==================================================" << std::endl;
		std::cout << "|               RobotomyRequestForm              |" << std::endl;
		std::cout << "|               Sign = 72 | Exc = 45             |" << std::endl;
		std::cout << "==================================================" << std::endl;

		Bureaucrat bureaucrat1("Jack(72)", 72);
		Bureaucrat bureaucrat2("Rick(45)", 45);
		RobotomyRequestForm robotomyRequestForm("Robotomy");

		std::cout << "==================================================" << std::endl;
		
		std::cout << std::endl;
		std::cout << std::endl;

		std::cout << "-------------------- signForm --------------------" << std::endl;
		std::cout << "| ";
		bureaucrat1.signForm(robotomyRequestForm);
		std::cout << "--------------------------------------------------" << std::endl;

		std::cout << std::endl;

		std::cout << "------------------- executeForm ------------------" << std::endl;
		std::cout << "| ";
		bureaucrat2.executeForm(robotomyRequestForm);
		std::cout << "--------------------------------------------------" << std::endl;

		std::cout << std::endl;
		std::cout << std::endl;

		std::cout << "------------------- Destructor -------------------" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "==================================================" << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	try
	{
		std::cout << "==================================================" << std::endl;
		std::cout << "|             PresidentialPardonForm             |" << std::endl;
		std::cout << "|               Sign = 25 | Exc = 5              |" << std::endl;
		std::cout << "==================================================" << std::endl;

		Bureaucrat bureaucrat1("Jack(25)", 25);
		Bureaucrat bureaucrat2("Rick(5)", 5);
		PresidentialPardonForm presidentialPardonForm("President");

		std::cout << "==================================================" << std::endl;
		
		std::cout << std::endl;
		std::cout << std::endl;

		std::cout << "-------------------- signForm --------------------" << std::endl;
		std::cout << "| ";
		bureaucrat1.signForm(presidentialPardonForm);
		std::cout << "--------------------------------------------------" << std::endl;

		std::cout << std::endl;

		std::cout << "------------------- executeForm ------------------" << std::endl;
		std::cout << "| ";
		bureaucrat2.executeForm(presidentialPardonForm);
		std::cout << "--------------------------------------------------" << std::endl;

		std::cout << std::endl;
		std::cout << std::endl;

		std::cout << "------------------- Destructor -------------------" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}