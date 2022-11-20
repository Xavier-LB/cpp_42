/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-baux <xle-baux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 21:07:20 by xlb               #+#    #+#             */
/*   Updated: 2022/11/20 14:38:12 by xle-baux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

// Contructors and Destructor --------------------------------------------------

FragTrap::FragTrap(void)
{
	std::cout << "Default constructor FragTrap called" << std::endl << std::endl;
}

FragTrap::FragTrap(FragTrap const& src)
{
	*this = src;
	std::cout << "Copy constructor FragTrap" << std::endl << std::endl;
	return ;
}

FragTrap::FragTrap(std::string name)
{
	this->m_name = name;
	this->m_hitPoints = 100;
	this->m_energyPoints = 100;
	this->m_attackDamage = 30;
	std::cout << "Constructor FragTrap with deafault values called" << std::endl;
	std::cout << *this << std::endl << std::endl;
}

FragTrap & FragTrap::operator=(FragTrap const & src)
{
	this->m_name= src.m_name;
	this->m_hitPoints= src.m_hitPoints;
	this->m_energyPoints= src.m_energyPoints;
	this->m_attackDamage= src.m_attackDamage;
	std::cout << "Copy assignment operator FragTrap called" << std::endl << std::endl;
	return *this;
}

FragTrap::~FragTrap(void)
{
	std::cout << "Destructor FragTrap called" << std::endl;
	std::cout << *this << std::endl << std::endl;
}


// Public mandatory functions --------------------------------------------------

void FragTrap::highFivesGuys(void)
{
	std::cout << "Give me a high five!" << std::endl;
	return ;
}

// Operator functions ----------------------------------------------------------

std::ostream &operator<<(std::ostream & out, FragTrap const & src)
{
	out << "Name: " << src.getName() << std::endl
	<< "Hit points: " << src.getHitPoints() << std::endl
	<< "Energy points: " << src.getEnergyPoints() << std::endl
	<< "Attack Damage: " << src.getAttackDamage() << std::endl;
	return (out);
}