/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-baux <xle-baux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 15:52:47 by xle-baux          #+#    #+#             */
/*   Updated: 2022/11/30 17:20:54 by xle-baux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main(void)
{
	const Animal* animal[10];
	Brain *brain1;
	Brain *brain2;

	for (size_t i = 0; i < 10; i++)
	{
		if (i % 2)
			animal[i] = new Cat();
		else
			animal[i] = new Dog();
	}

	brain1 = animal[1]->getBrain();
	brain1->setIdea("idea index 1", 1);
	brain1->setIdea("idea index 99", 99);
	std::cout << brain1->getIdea(1) << std::endl;
	std::cout << brain1->getIdea(99) << std::endl;

	brain2 = animal[9]->getBrain();
	std::cout << brain2->getIdea(1) << std::endl;
	std::cout << brain2->getIdea(99) << std::endl;

	for (size_t i = 0; i < 10; i++)
		delete animal[i];
}