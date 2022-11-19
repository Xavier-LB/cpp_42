/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xlb <xlb@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 12:51:44 by xlb               #+#    #+#             */
/*   Updated: 2022/11/20 00:26:21 by xlb              ###   ########.fr       */
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
	}
	{
		ClapTrap Lili("Lili");

		Lili.attack("Handsome Jack");
		Lili.takeDamage(6);
		Lili.beRepaired(4);
		Lili.takeDamage(3);
		Lili.beRepaired(8);
		Lili.takeDamage(17);
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
