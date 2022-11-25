/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-baux <xle-baux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 15:52:47 by xle-baux          #+#    #+#             */
/*   Updated: 2022/11/25 12:35:29 by xle-baux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

// int main(void)
// {
// 	const Animal* j = new Dog();
// 	const Animal* i = new Cat();

// 	delete j;
// 	delete i;
// 	return 0;
// }


	/////////////////////////////////
	// Second part (Array + brain) //
	/////////////////////////////////
int main(void)
{
	// std::cout << "-----------------------------" << std::endl <<
	// 	"Second part (Array + brain)" << std::endl << "-----------------------------" << std::endl;
	const Animal* animal[10];

	for (size_t i = 0; i < 10; i++)
	{
		if (i % 2)
			animal[i] = new Cat();
		else
			animal[i] = new Dog();
	}
	for (size_t i = 0; i < 10; i++)
		delete animal[i];
}