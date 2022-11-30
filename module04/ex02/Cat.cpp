/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-baux <xle-baux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 15:58:05 by xle-baux          #+#    #+#             */
/*   Updated: 2022/11/30 17:44:45 by xle-baux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// Contructors and Destructor --------------------------------------------------
Cat::Cat(void) : m_brain(0)
{
	this->m_brain = new Brain;
	this->type = "Cat";
	std::cout << "(Cat) Default constructor" << std::endl;
}

Cat::Cat(Cat const & src)
{
	*this = src;
	std::cout << "(Cat) Copy constructor" << std::endl;
}

Cat::~Cat(void)
{
	std::cout << "(Cat) Destructor" << std::endl;
	delete this->m_brain;
}

Cat & Cat::operator=(Cat const & src)
{
	if (this != &src)
	{
		this->type = src.type;
		this->m_brain = new Brain(*src.m_brain);
	}
	std::cout << "(Cat) Copy assignment operator" << std::endl;
	return *this;
}

// Secondary functions ---------------------------------------------------------
std::string Cat::getType(void)
{
	return (this->type);
}

Brain *Cat::getBrain(void) const
{
	return (this->m_brain);
}

// Mandatory functions ---------------------------------------------------------
void Cat::makeSound(void) const
{
	std::cout << "Miau Miau!!!" << std::endl;
}