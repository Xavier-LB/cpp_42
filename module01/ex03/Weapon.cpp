/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-baux <xle-baux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 12:13:59 by xle-baux          #+#    #+#             */
/*   Updated: 2022/09/23 14:34:26 by xle-baux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string newType): type(newType) {
	
}

Weapon::~Weapon() {

}

const std::string&	Weapon::getType( void )
{
	return (this->type);
}

void	Weapon::setType(std::string newType) {
	
	type = newType;
}
