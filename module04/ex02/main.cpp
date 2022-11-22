/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-baux <xle-baux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 15:52:47 by xle-baux          #+#    #+#             */
/*   Updated: 2022/11/22 17:03:42 by xle-baux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main(void)
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	delete j;
	delete i;
	return 0;
}


	/////////////////////////////////
	// Second part (Array + brain) //
	/////////////////////////////////
// int main(void)
// {
// 	// std::cout << "-----------------------------" << std::endl <<
// 	// 	"Second part (Array + brain)" << std::endl << "-----------------------------" << std::endl;
// 	const Animal* animal[10];

// 	for (size_t i = 0; i < 10; i++)
// 	{
// 		if (i % 2)
// 			animal[i] = new Cat();
// 		else
// 			animal[i] = new Dog();
// 	}
// 	for (size_t i = 0; i < 10; i++)
// 		delete animal[i];

// 	///////////////////////////////
// 	// Third part (Copy + brain) //
// 	///////////////////////////////
// 	// std::cout << "-----------------------------" << std::endl <<
// 	// 	"Third part (Copy + brain (by mrosario xd))" << std::endl << "-----------------------------" << std::endl;
// 	// const Animal * dog2 = new Dog();
// 	// const Animal * dog1 = new Dog(*(static_cast<Dog const *>(dog2)));

// 	// delete dog2;
// 	// delete dog1;
// }