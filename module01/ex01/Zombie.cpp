/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-baux <xle-baux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 08:19:02 by xle-baux          #+#    #+#             */
/*   Updated: 2022/10/06 16:22:56 by xle-baux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{

}

Zombie::~Zombie()
{
	std::cout << m_name << " destroyed" << std::endl;
}

void Zombie::setName(std::string name)
{
	Zombie::m_name = name;
}

void Zombie::announce( void )
{
	std::cout << m_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
