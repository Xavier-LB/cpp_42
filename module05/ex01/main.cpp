/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-baux <xle-baux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 14:45:33 by xle-baux          #+#    #+#             */
/*   Updated: 2022/12/09 10:11:25 by xle-baux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

void test1();
void test2();
void test3();

int main() {

	test1();
	for (int i = 0; i < 5; i++)
		std::cout << std::endl;
	test2();
	for (int i = 0; i < 5; i++)
		std::cout << std::endl;
	test3();
	
	return 0;
}

void test1()
{
	try
	{
		std::cout << "==================================================" << std::endl;
		std::cout << "|                       Form1                    |" << std::endl;
		std::cout << "|              Sign = 145 | Exc = 137            |" << std::endl;
		std::cout << "==================================================" << std::endl;

		Bureaucrat bureaucrat1("Jack(145)", 145);
		Form form("Form1", 145, 137);

		std::cout << "==================================================" << std::endl;
		
		std::cout << std::endl;
		std::cout << std::endl;

		std::cout << "-------------------- signForm --------------------" << std::endl;
		std::cout << "| ";
		bureaucrat1.signForm(form);
		std::cout << "--------------------------------------------------" << std::endl;

		std::cout << std::endl;

		std::cout << "------------------- Destructor -------------------" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void test2()
{
	try
	{
		std::cout << "==================================================" << std::endl;
		std::cout << "|           Form2 (exception grade to low)       |" << std::endl;
		std::cout << "|               Sign = 72 | Exc = 45             |" << std::endl;
		std::cout << "==================================================" << std::endl;

		Bureaucrat bureaucrat1("Jack(73)", 73);
		Form form("Form2", 72, 45);

		std::cout << "==================================================" << std::endl;
		
		std::cout << std::endl;
		std::cout << std::endl;

		std::cout << "-------------------- signForm --------------------" << std::endl;
		std::cout << "| ";
		bureaucrat1.signForm(form);
		std::cout << "--------------------------------------------------" << std::endl;

		std::cout << std::endl;

		std::cout << "------------------- Destructor -------------------" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void test3()
{
	try
	{
		std::cout << "==================================================" << std::endl;
		std::cout << "|        Form2 (exception form grade to low)     |" << std::endl;
		std::cout << "|              Sign = 151 | Exc = 45             |" << std::endl;
		std::cout << "==================================================" << std::endl;

		Bureaucrat bureaucrat1("Jack(73)", 73);
		Form form("Form2", 151, 45);

		std::cout << "==================================================" << std::endl;
		
		std::cout << std::endl;
		std::cout << std::endl;

		std::cout << "-------------------- signForm --------------------" << std::endl;
		std::cout << "| ";
		bureaucrat1.signForm(form);
		std::cout << "--------------------------------------------------" << std::endl;

		std::cout << std::endl;

		std::cout << "------------------- Destructor -------------------" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

