/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-baux <xle-baux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 14:45:33 by xle-baux          #+#    #+#             */
/*   Updated: 2022/11/28 19:18:37 by xle-baux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"

void testGradeTooHighException();

void testGradeTooLowException();

void test();

void test2();

void test3();

int main() {
  // testGradeTooHighException();
  // std::cout << "---------------------------------" << std::endl;
  // testGradeTooLowException();
  // std::cout << "---------------------------------" << std::endl;
  // test();
//   test2();
  test3();
  return 0;
}

void testGradeTooHighException() {
  try {
    Bureaucrat bureaucrat("Anderson", 2);
    bureaucrat.incrementGrade();
    std::cout << bureaucrat << std::endl;
  } catch (std::exception &e) {
    std::cout << "Error Bureaucrat: " << e.what() << std::endl;
  }
}

void testGradeTooLowException() {
  try {
    Bureaucrat bureaucrat("Anderson", 150);
    bureaucrat.decrementGrade();
    std::cout << bureaucrat << std::endl;
  } catch (std::exception &e) {
    std::cout << "Error Bureaucrat: " << e.what() << std::endl;
  }
}

void test()
{
  try
  {
	  Bureaucrat bureaucrat("Anderson", 152);
    bureaucrat.decrementGrade();
    std::cout << bureaucrat << std::endl;
  }
  catch(const std::exception& e)
  {
    std::cerr << "Error Bureaucrat: " << e.what() << std::endl;
  }
}

void test2()
{
  try
  {
    Bureaucrat bureaucrat("Toto", 10);
    Form form("Form1", 100, 100);
    bureaucrat.signForm(form);
    std::cout << bureaucrat << std::endl;
    std::cout << form << std::endl;
  }
  catch(const std::exception& e)
  {
    std::cerr << "Error Form: " << e.what() << '\n';
  }
  
}

void test3()
{
	try
	{
		Bureaucrat bureaucrat1("Toto", 144);
		Bureaucrat bureaucrat2("tata", 136);
		ShrubberyCreationForm shrubberyCreationForm("home");

		// std::cout << shrubberyCreationForm <<std::endl;
		bureaucrat1.signForm(shrubberyCreationForm);
		shrubberyCreationForm.execute(bureaucrat2);
		// std::cout << shrubberyCreationForm <<std::endl;

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}