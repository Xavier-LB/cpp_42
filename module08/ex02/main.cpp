/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-baux <xle-baux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 16:58:21 by xle-baux          #+#    #+#             */
/*   Updated: 2022/12/12 14:29:49 by xle-baux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>

int main()
{
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;

	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}

	std::cout << "---------------------------------------" << std::endl;
	std::cout << std::endl;

	MutantStack<int>::r_iterator r_it = mstack.rbegin();
	MutantStack<int>::r_iterator r_ite = mstack.rend();
	++r_it;
	--r_it;

	while (r_it != r_ite)
	{
		std::cout << *r_it << std::endl;
		++r_it;
	}
	return 0;
}
