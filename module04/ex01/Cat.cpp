/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-baux <xle-baux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 15:58:05 by xle-baux          #+#    #+#             */
/*   Updated: 2022/11/20 17:12:06 by xle-baux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// Contructors and Destructor --------------------------------------------------
Cat::Cat(void)
{
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
}

Cat & Cat::operator=(Cat const & src)
{
	this->type = src.type;
	std::cout << "(Cat) Copy assignment operator" << std::endl;
	return *this;
}

// Secondary functions ---------------------------------------------------------
std::string Cat::getType(void)
{
	return (this->type);
}

// Mandatory functions ---------------------------------------------------------
void Cat::makeSound(void) const
{
	std::cout << "Miau Miau!!!" << std::endl;
}