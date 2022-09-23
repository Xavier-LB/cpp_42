/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-baux <xle-baux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 12:14:53 by xle-baux          #+#    #+#             */
/*   Updated: 2022/09/23 14:43:15 by xle-baux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
private:

std::string name;
Weapon		&Weapon;



public:

	HumanA(std::string newName, class Weapon &newWeapon);
	~HumanA();

	void	attack( void );
};

#endif
