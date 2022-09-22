/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-baux <xle-baux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 12:04:29 by xle-baux          #+#    #+#             */
/*   Updated: 2022/09/22 08:07:08 by xle-baux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
private:

	std::string m_name;


public:

	Zombie( std::string name );
	~Zombie();
	void announce( void );
};

Zombie*	newZombie( std::string name );
void	randomChump( std::string name );

# endif
