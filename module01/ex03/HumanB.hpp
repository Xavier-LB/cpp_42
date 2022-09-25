/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-baux <xle-baux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 12:15:16 by xle-baux          #+#    #+#             */
/*   Updated: 2022/09/25 14:24:24 by xle-baux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
private:

std::string	name;
Weapon		*Weapon;



public:

	HumanB( std::string newName );
	~HumanB();

	void	attack( void ) const;
	void	setWeapon( class Weapon& newWeapon );
};

#endif
