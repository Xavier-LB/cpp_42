/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xlb <xlb@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 19:14:12 by xlb               #+#    #+#             */
/*   Updated: 2022/11/20 19:21:30 by xlb              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

// Contructors and Destructor --------------------------------------------------
WrongAnimal::WrongAnimal(void)
{
	std::cout << "(WrongAnimal) Default constructor" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const & src)
{
	*this = src;
	std::cout << "(WrongAnimal) Copy constructor" << std::endl;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "(WrongAnimal) Destructor" << std::endl;
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal const & src)
{
	this->type = src.type;
	std::cout << "(WrongAnimal) Copy assignment operator" << std::endl;
	return *this;
}

// Secondary functions ---------------------------------------------------------
const std::string &WrongAnimal::getType(void) const
{
	return (this->type);
}

// Mandatory functions ---------------------------------------------------------
void WrongAnimal::makeSound(void) const
{
 return ;
}