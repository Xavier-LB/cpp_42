/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-baux <xle-baux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 14:45:33 by xle-baux          #+#    #+#             */
/*   Updated: 2022/11/25 18:57:33 by xle-baux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

void testGradeTooHighException();

void testGradeTooLowException();

void test();

int main() {
  testGradeTooHighException();
  std::cout << "---------------------------------" << std::endl;
  testGradeTooLowException();
  std::cout << "---------------------------------" << std::endl;
  test();
  return 0;
}

void testGradeTooHighException() {
  Bureaucrat bureaucrat("Anderson", 1);

  try {
    bureaucrat.incrementGrade();
  } catch (std::exception &e) {
    std::cout << bureaucrat << std::endl;
    std::cout << e.what() << std::endl;
  }
}

void testGradeTooLowException() {
  Bureaucrat bureaucrat("Anderson", 150);

  try {
    bureaucrat.decrementGrade();
  } catch (std::exception &e) {
    std::cout << bureaucrat << std::endl;
    std::cout << e.what() << std::endl;
  }
}

void test()
{
	Bureaucrat bureaucrat("Anderson", 100);

	try {
		bureaucrat.decrementGrade();
		std::cout << bureaucrat << std::endl;
	} catch (std::exception &e) {
		std::cout << bureaucrat << std::endl;
		std::cout << e.what() << std::endl;
	}
}
