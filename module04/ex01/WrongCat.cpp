/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xlb <xlb@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 19:17:03 by xlb               #+#    #+#             */
/*   Updated: 2022/11/20 19:29:45 by xlb              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

// Contructors and Destructor --------------------------------------------------
WrongCat::WrongCat(void)
{
	this->type = "WrongCat";
	std::cout << "(WrongCat) Default constructor" << std::endl;
}

WrongCat::WrongCat(WrongCat const & src)
{
	*this = src;
	std::cout << "(WrongCat) Copy constructor" << std::endl;
}

WrongCat::~WrongCat(void)
{
	std::cout << "(WrongCat) Destructor" << std::endl;
}

WrongCat & WrongCat::operator=(WrongCat const & src)
{
	this->type = src.type;
	std::cout << "(WrongCat) Copy assignment operator" << std::endl;
	return *this;
}

// Secondary functions ---------------------------------------------------------
std::string WrongCat::getType(void)
{
	return (this->type);
}

// Mandatory functions ---------------------------------------------------------
void WrongCat::makeSound(void) const
{
	std::cout << "WrongCat Miau Miau!!!" << std::endl;
}