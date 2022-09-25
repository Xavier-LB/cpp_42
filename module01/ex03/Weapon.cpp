/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-baux <xle-baux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 12:13:59 by xle-baux          #+#    #+#             */
/*   Updated: 2022/09/25 14:15:38 by xle-baux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() {

}

Weapon::Weapon(std::string newType): type(newType) {

}

Weapon::~Weapon( void ) {

}

const std::string&	Weapon::getType( void ) {

	return (this->type);
}

void	Weapon::setType( std::string newType ) {

	type = newType;
}
