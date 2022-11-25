/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-baux <xle-baux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 21:07:20 by xlb               #+#    #+#             */
/*   Updated: 2022/11/25 11:28:12 by xle-baux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// Contructors and Destructor --------------------------------------------------

ScavTrap::ScavTrap(void)
{
	this->m_name = "";
	this->m_hitPoints = 100;
	this->m_energyPoints = 50;
	this->m_attackDamage = 20;
	std::cout << "(ScavTrap) Default constructor called" << std::endl << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const& src)
{
	*this = src;
	std::cout << "(ScavTrap) Copy constructor" << std::endl << std::endl;
	return ;
}

ScavTrap::ScavTrap(std::string name)
{
	this->m_name = name;
	this->m_hitPoints = 100;
	this->m_energyPoints = 50;
	this->m_attackDamage = 20;
	std::cout << "(ScavTrap) Constructor with deafault values called" << std::endl;
	std::cout << *this << std::endl << std::endl;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & src)
{
	this->m_name= src.m_name;
	this->m_hitPoints= src.m_hitPoints;
	this->m_energyPoints= src.m_energyPoints;
	this->m_attackDamage= src.m_attackDamage;
	std::cout << "(ScavTrap) Copy assignment operator called" << std::endl << std::endl;
	return *this;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "(ScavTrap) Destructor called" << std::endl;
	std::cout << *this << std::endl << std::endl;
}


// Public mandatory functions --------------------------------------------------

void ScavTrap::attack(const std::string& target)
{
	if (this->m_energyPoints > 0)
	{
		this->m_energyPoints -= 1;
		std::cout << "ScavTrap " << this->m_name
					<< " attacks " << target
					<< ", causing " << this->m_attackDamage
					<< " points of damage!" << std::endl << std::endl;
	}
	else
	{
		std::cout << "ScavTrap " 
					<< this->m_name << " has not more energy points"
					<< std::endl << std::endl;
	}
}

void ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << this->m_name << " got guard gate " << std::endl;
}



// Operator functions ----------------------------------------------------------

std::ostream &operator<<(std::ostream & out, ScavTrap const & src)
{
	out << "Name: " << src.getName() << std::endl
	<< "Hit points: " << src.getHitPoints() << std::endl
	<< "Energy points: " << src.getEnergyPoints() << std::endl
	<< "Attack Damage: " << src.getAttackDamage() << std::endl;
	return (out);
}