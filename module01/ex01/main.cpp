/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-baux <xle-baux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 08:18:22 by xle-baux          #+#    #+#             */
/*   Updated: 2022/09/23 11:36:16 by xle-baux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main() {

	int			numOfZombies = 10;
	std::string	name = "Abraham Ford";
	
	Zombie		*zombieH = zombieHorde(numOfZombies, name);

	for (int i = 0; i < numOfZombies; i++) {
		zombieH[i].announce();
	}
	delete []zombieH;
	return (0);
}
