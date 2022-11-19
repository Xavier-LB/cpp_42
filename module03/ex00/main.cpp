/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xlb <xlb@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 12:51:44 by xlb               #+#    #+#             */
/*   Updated: 2022/11/19 20:46:04 by xlb              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap toto("Toto"), tata("Tata");

	toto.setAttackDamage(9);

	toto.attack(tata.getName());
	tata.takeDamage(toto.getAttackDamage());
	std::cout << tata << std::endl;
	toto.attack(tata.getName());
	tata.takeDamage(toto.getAttackDamage());
	std::cout << tata << std::endl;
	toto.attack(tata.getName());
	tata.takeDamage(toto.getAttackDamage());
	std::cout << tata << std::endl;
	toto.attack(tata.getName());
	tata.takeDamage(toto.getAttackDamage());
	std::cout << tata << std::endl;
	toto.attack(tata.getName());
	tata.takeDamage(toto.getAttackDamage());
	std::cout << tata << std::endl;
	toto.attack(tata.getName());
	tata.takeDamage(toto.getAttackDamage());
	std::cout << tata << std::endl;
	toto.attack(tata.getName());
	tata.takeDamage(toto.getAttackDamage());
	std::cout << tata << std::endl;
	toto.attack(tata.getName());
	tata.takeDamage(toto.getAttackDamage());
	std::cout << tata << std::endl;
	toto.attack(tata.getName());
	tata.takeDamage(toto.getAttackDamage());
	std::cout << tata << std::endl;
	toto.attack(tata.getName());
	tata.takeDamage(toto.getAttackDamage());
	std::cout << tata << std::endl;
	toto.attack(tata.getName());
	tata.takeDamage(toto.getAttackDamage());
	std::cout << tata << std::endl;
	
	return 0;
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
