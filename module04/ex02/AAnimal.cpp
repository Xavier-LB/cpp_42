/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-baux <xle-baux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 15:55:46 by xle-baux          #+#    #+#             */
/*   Updated: 2022/11/25 13:32:53 by xle-baux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

// Contructors and Destructor --------------------------------------------------
AAnimal::AAnimal(void)
{
	std::cout << "(AAnimal) Default constructor" << std::endl;
}

AAnimal::AAnimal(AAnimal const & src)
{
	*this = src;
	std::cout << "(AAnimal) Copy constructor" << std::endl;
}

AAnimal::~AAnimal(void)
{
	std::cout << "(AAnimal) Destructor" << std::endl;
}

AAnimal & AAnimal::operator=(AAnimal const & src)
{
	if (this != &src)
	{
		this->type = src.type;
	}
	std::cout << "(AAnimal) Copy assignment operator" << std::endl;
	return *this;
}

// Secondary functions ---------------------------------------------------------
const std::string &AAnimal::getType(void) const
{
	return (this->type);
}

// Mandatory functions ---------------------------------------------------------
