/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-baux <xle-baux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 08:18:54 by xle-baux          #+#    #+#             */
/*   Updated: 2022/10/06 13:35:14 by xle-baux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
private:

	std::string m_name;


public:

	Zombie();
	~Zombie();
	
	void	setName(std::string name);
	void	announce( void );;
};

Zombie*	zombieHorde( int N, std::string name );

# endif