/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-baux <xle-baux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 17:14:48 by xle-baux          #+#    #+#             */
/*   Updated: 2022/12/08 10:13:14 by xle-baux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>
#include <ctime>

Base * generate(void);
Base * returnA(void) {Base *base; return((base = new A));}
Base * returnB(void) {Base *base; return((base = new B));}
Base * returnC(void) {Base *base; return((base = new C));}

void identify(Base* p);
void identify(Base& p);

int main()
{
	Base* a = generate();

	identify(a);
	identify(*a);
	
	delete a;
	return 0;
}

Base * generate(void)
{
	std::time_t t = std::time(0);
	Base * (*list[3])() = {&returnA, &returnB, &returnC};
	
	return (*list[t % 3])();
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p))
	{
		std::cout << "A*" << std::endl;
	}
	else if (dynamic_cast<B*>(p))
	{
		std::cout << "B*" << std::endl;
	}
	else if (dynamic_cast<C*>(p))
	{
		std::cout << "C*" << std::endl;
	}
}

void identify(Base& p)
{
	try
	{
		A& a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "A&" << std::endl;
	}
	catch(...) {}
		try
	{
		B& b = dynamic_cast<B&>(p);
		(void)b;
		std::cout << "B&" << std::endl;
	}
	catch(...) {}
		try
	{
		C& c = dynamic_cast<C&>(p);
		(void)c;
		std::cout << "C&" << std::endl;
	}
	catch(...) {}
}
