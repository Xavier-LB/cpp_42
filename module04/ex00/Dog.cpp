/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-baux <xle-baux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 15:56:26 by xle-baux          #+#    #+#             */
/*   Updated: 2022/11/20 17:27:56 by xle-baux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// Contructors and Destructor --------------------------------------------------
Dog::Dog(void)
{
	this->type = "Dog";
	std::cout << "(Dog) Default constructor" << std::endl;
}

Dog::Dog(Dog const & src)
{
	*this = src;
	std::cout << "(Dog) Copy constructor" << std::endl;
}

Dog::~Dog(void)
{
	std::cout << "(Dog) Destructor" << std::endl;
}

Dog & Dog::operator=(Dog const & src)
{
	this->type = src.type;
	std::cout << "(Dog) Copy assignment operator" << std::endl;
	return *this;
}

// Secondary functions ---------------------------------------------------------
std::string Dog::getType(void)
{
	return (this->type);
}

// Mandatory functions ---------------------------------------------------------
void Dog::makeSound(void) const
{
	std::cout << "Houf Houf!!!" << std::endl;
}
