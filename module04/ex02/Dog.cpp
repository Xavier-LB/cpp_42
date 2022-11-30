/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-baux <xle-baux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 15:56:26 by xle-baux          #+#    #+#             */
/*   Updated: 2022/11/30 17:44:15 by xle-baux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// Contructors and Destructor --------------------------------------------------
Dog::Dog(void) : m_brain(0)
{
	this->m_brain = new Brain;
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
	delete this->m_brain;
	std::cout << "(Dog) Destructor" << std::endl;
}

Dog & Dog::operator=(Dog const & src)
{
	if (this != &src)
	{
		this->type = src.type;
		this->m_brain = new Brain(*src.m_brain);
	}
	std::cout << "(Dog) Copy assignment operator" << std::endl;
	return *this;
}

// Secondary functions ---------------------------------------------------------
std::string Dog::getType(void)
{
	return (this->type);
}

Brain *Dog::getBrain(void) const
{
	return (this->m_brain);
}

// Mandatory functions ---------------------------------------------------------
void Dog::makeSound(void) const
{
	std::cout << "Wouf Wouf!!!" << std::endl;
}