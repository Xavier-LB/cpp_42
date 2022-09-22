/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-baux <xle-baux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 12:04:12 by xle-baux          #+#    #+#             */
/*   Updated: 2022/09/22 08:16:06 by xle-baux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main( void )
{
	Zombie zombie1("Carl Grimes");
	zombie1.announce();

	randomChump("Shane Walsh");

	Zombie *zombie2;
	zombie2 = newZombie("Gabriel Stokes");
	zombie2->announce();
	delete zombie2;
	return (0);
}
