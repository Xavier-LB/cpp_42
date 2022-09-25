/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-baux <xle-baux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 12:15:30 by xle-baux          #+#    #+#             */
/*   Updated: 2022/09/25 14:25:31 by xle-baux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "iostream"

HumanB::HumanB(std::string newName): name(newName), Weapon(NULL) {

}

HumanB::~HumanB() {

}

void HumanB::setWeapon( class Weapon &newWeapon ) {

	Weapon = &newWeapon;
}

void	HumanB::attack( void ) const {

	if (this->Weapon) {
		std::cout << name << " attacks with their " << Weapon->getType() << std::endl;
	}
	else 
		std::cout << name << " dosen't have a weapon " << std::endl;
}
