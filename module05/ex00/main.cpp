/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-baux <xle-baux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 14:45:33 by xle-baux          #+#    #+#             */
/*   Updated: 2022/11/27 14:18:29 by xle-baux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

void testGradeTooHighException();

void testGradeTooLowException();

void test();

void test2();

int main() {
  testGradeTooHighException();
  std::cout << "---------------------------------" << std::endl;
  testGradeTooLowException();
  std::cout << "---------------------------------" << std::endl;
  test();
//   test2();
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

