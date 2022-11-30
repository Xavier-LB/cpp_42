/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-baux <xle-baux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 15:52:47 by xle-baux          #+#    #+#             */
/*   Updated: 2022/11/30 18:01:53 by xle-baux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"


int main(void)
{
	AAnimal* animal[3];
	Brain *brain1;


	animal[0] = new Cat();
	animal[1] = new Dog();
	// animal[3] = new AAnimal();

	brain1 = animal[1]->getBrain();
	brain1->setIdea("idea index 1", 1);
	brain1->setIdea("idea index 99", 99);
	std::cout << brain1->getIdea(1) << std::endl;
	std::cout << brain1->getIdea(99) << std::endl;

	for (size_t i = 0; i < 2; i++)
		delete animal[i];
}
