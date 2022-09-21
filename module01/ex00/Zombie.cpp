/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-baux <xle-baux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 13:06:29 by xle-baux          #+#    #+#             */
/*   Updated: 2022/09/21 15:29:26 by xle-baux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name): m_name(name) {

}

Zombie::~Zombie() {

}

void Zombie::announce( void ) {
	std::cout << m_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}