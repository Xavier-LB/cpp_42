/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-baux <xle-baux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 12:04:12 by xle-baux          #+#    #+#             */
/*   Updated: 2022/10/06 13:32:20 by xle-baux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main( void )
{
	std::cout << "First Zombie (Carl Grimes) created manualy:" << std::endl;
	Zombie zombie1("Carl Grimes");
	zombie1.announce();
	std::cout << std::endl;

	std::cout << "Second Zombie (Shane Walsh) created with function (randomChump):" << std::endl;
	randomChump("Shane Walsh");
	std::cout << std::endl;


	std::cout << "Thrid Zombie (Gabriel Stokes) created with function (newZombie):" << std::endl;
	Zombie *zombie2;
	zombie2 = newZombie("Gabriel Stokes");
	zombie2->announce();
	delete zombie2;
	
	return (0);
}
