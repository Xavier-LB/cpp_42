/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-baux <xle-baux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 12:51:44 by xlb               #+#    #+#             */
/*   Updated: 2022/11/25 11:32:59 by xle-baux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main( void )
{
	{
		ScavTrap toto("Toto");

		toto.attack("Handsome Jack");
		toto.takeDamage(6);
		toto.beRepaired(4);
		toto.takeDamage(3);
		toto.guardGate();
		toto.beRepaired(8);
		toto.takeDamage(17);
		std::cout << "\033[1;34m" << toto << "\033[0m" << std::endl;
	}
	std::cout << "----------------------------------------------" << std::endl;
	{
		ClapTrap Lili("Lili");

		Lili.attack("Handsome Jack");
		Lili.takeDamage(6);
		Lili.beRepaired(4);
		Lili.takeDamage(3);
		Lili.beRepaired(8);
		Lili.takeDamage(17);
		std::cout << "\033[1;32m" << Lili << "\033[0m" << std::endl;
	}
}

// int main(void)
// {
// 	ClapTrap foo("foo");
// 	ClapTrap bar("bar");
	
// 	foo.setAttackDamage(7);

// 	std::cout << std::endl << foo << bar << std::endl;

// 	foo.attack(bar.getName());
// 	bar.takeDamage(foo.getAttackDamage());

// 	std::cout << std::endl << foo << bar << std::endl;

// 	bar.beRepaired(5);

// 	std::cout << std::endl << foo << bar << std::endl;

// 	return (0);
// }
