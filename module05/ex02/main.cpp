/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-baux <xle-baux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 14:45:33 by xle-baux          #+#    #+#             */
/*   Updated: 2022/12/01 17:31:49 by xle-baux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"

void test1();

int main() {

  test1();
  return 0;
}

void test1()
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