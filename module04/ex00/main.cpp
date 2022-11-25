/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-baux <xle-baux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 15:52:47 by xle-baux          #+#    #+#             */
/*   Updated: 2022/11/25 12:21:36 by xle-baux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

// int main()
// {
// 	const Animal* meta = new Animal();
// 	const Animal* j = new Dog();
// 	const Animal* i = new Cat();
// 	std::cout << j->getType() << " type" << std::endl;
// 	std::cout << i->getType() << " type" << std::endl;
// 	i->makeSound(); //will output the cat sound!
// 	j->makeSound();
// 	meta->makeSound();

// 	return 0;
// }

// int	main( void )
// {
// 	const Animal* meta = new Animal();
// 	const Animal* dog = new Dog();
// 	const Animal* cat = new Cat();

// 	std::cout << dog->getType() << std::endl;
// 	std::cout << cat->getType() << std::endl;
// 	meta->makeSound();
// 	cat->makeSound();
// 	dog->makeSound();
// 	delete meta;
// 	delete cat;
// 	delete dog;


// 	const WrongAnimal* metaWrong = new WrongAnimal();
// 	const WrongAnimal* catWrong = new WrongCat();

// 	std::cout << catWrong->getType() << std::endl;
// 	metaWrong->makeSound();
// 	catWrong->makeSound();
// 	delete metaWrong;
// 	delete catWrong;
// }

int main()
{
	{
		const Animal *meta = new Animal();
		const Animal *dog = new Dog();
		const Animal *cat = new Cat();
		const WrongAnimal *wrong = new WrongCat();
		std::cout << dog->getType() << std::endl;
		std::cout << cat->getType() << std::endl;
		cat->makeSound();
		dog->makeSound();
		meta->makeSound();
		wrong->makeSound();
		delete meta;
		delete cat;
		delete dog;
		delete wrong;
	}
	return (0);
}