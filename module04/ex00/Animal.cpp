/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-baux <xle-baux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 15:55:46 by xle-baux          #+#    #+#             */
/*   Updated: 2022/11/30 13:08:53 by xle-baux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

// Contructors and Destructor --------------------------------------------------
Animal::Animal(void) : type("Animal not specified")
{
	std::cout << "(Animal) Default constructor" << std::endl;
}

Animal::Animal(Animal const & src) : type(src.type)
{
	*this = src;
	std::cout << "(Animal) Copy constructor" << std::endl;
}

Animal::~Animal(void)
{
	std::cout << "(Animal) Destructor" << std::endl;
}

Animal & Animal::operator=(Animal const & src)
{
	if (this != &src)
	{
		this->type = src.type;
	}
	std::cout << "(Animal) Copy assignment operator" << std::endl;
	return *this;
}

// Secondary functions ---------------------------------------------------------
const std::string &Animal::getType(void) const
{
	return (this->type);
}

// Mandatory functions ---------------------------------------------------------
void Animal::makeSound(void) const
{
	std::cout << "Default Animal sound... sound?" << std::endl;
}