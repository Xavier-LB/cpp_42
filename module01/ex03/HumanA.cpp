/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-baux <xle-baux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 12:14:33 by xle-baux          #+#    #+#             */
/*   Updated: 2022/10/06 13:53:23 by xle-baux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string newName, class Weapon &newWeapon): name(newName),
	Weapon(newWeapon)
{

}

HumanA::~HumanA()
{

}

void	HumanA::attack( void )
{
	std::cout << name << " attacks with their " << Weapon.getType() << std::endl;
}
