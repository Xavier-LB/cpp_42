/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-baux <xle-baux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 08:19:02 by xle-baux          #+#    #+#             */
/*   Updated: 2022/09/22 08:56:26 by xle-baux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( std::string name ) : m_name ( name ) {

}

Zombie::~Zombie() {

}

Zombie*	zombieHorde( int N, std::string name ) {
	Zombie *zombie;

	zombie = new Zombie[N];
	return (zombie);
}
