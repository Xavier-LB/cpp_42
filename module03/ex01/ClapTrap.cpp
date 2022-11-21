/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-baux <xle-baux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 12:51:57 by xlb               #+#    #+#             */
/*   Updated: 2022/11/21 14:53:48 by xle-baux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// Contructors and Destructor --------------------------------------------------

ClapTrap::ClapTrap(void) :	m_name(""),
							m_hitPoints(100),
							m_energyPoints(50),
							m_attackDamage(20)
{
	std::cout << "Default constructor called" << std::endl << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const& src)
{
	*this = src;
	std::cout << "Copy constructor ClapTrap" << std::endl << std::endl;
	return ;
}

ClapTrap::ClapTrap(std::string name) :	m_name(name),
										m_hitPoints(100),
										m_energyPoints(50),
										m_attackDamage(20)
{
	std::cout << "Constructor ClapTrap with deafault values called" << std::endl;
	std::cout << *this << std::endl << std::endl;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & src)
{
	this->m_name= src.m_name;
	this->m_hitPoints= src.m_hitPoints;
	this->m_energyPoints= src.m_energyPoints;
	this->m_attackDamage= src.m_attackDamage;
	std::cout << "Copy assignment operator ClapTrap called" << std::endl << std::endl;
	return *this;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Destructor ClapTrap called" << std::endl;
	std::cout << *this << std::endl << std::endl;
}


// Set values functions --------------------------------------------------------

void ClapTrap::setAttackDamage(unsigned int attackDamage)
{
	std::cout << this->getName() << "'s attack damage set to " << attackDamage
				<< std::endl << std::endl;
	this->m_attackDamage = attackDamage;
}


// Get values functions --------------------------------------------------------

std::string ClapTrap::getName(void) const
{
	return (this->m_name);
}

unsigned int ClapTrap::getHitPoints(void) const
{
	return (this->m_hitPoints);
}

unsigned int ClapTrap::getEnergyPoints(void) const
{
	return (this->m_energyPoints);
}

unsigned int ClapTrap::getAttackDamage(void) const
{
	return (this->m_attackDamage);
}


// Public mandatory functions --------------------------------------------------

void ClapTrap::attack(const std::string& target)
{
	if (this->m_energyPoints > 0)
	{
		this->m_energyPoints -= 1;
		std::cout << "ClapTrap " << this->m_name
					<< " attacks " << target
					<< ", causing " << this->m_attackDamage
					<< " points of damage!" << std::endl << std::endl;
	}
	else
	{
		std::cout << this->m_name << " has not more energy points"
					<< std::endl << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (amount <= this->m_hitPoints)
	{
		std::cout << this->m_name
					<< " lose "
					<< amount
					<< " hit points"
					<< std::endl << std::endl;
		this->m_hitPoints -= amount;
	}
	else if (amount > this->m_hitPoints && this->m_hitPoints > 0)
	{
		std::cout << this->m_name
					<< " lose "
					<< this->m_hitPoints
					<< " hit points"
					<< std::endl << std::endl;
		this->m_hitPoints -= this->m_hitPoints;
	}
	else
	{
		std::cout << this->m_name
					<< " lose "
					<< this->m_hitPoints
					<< " hit points, is already dead!"
					<< std::endl << std::endl;
	}

	return ;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->m_energyPoints > 0)
	{
		this->m_energyPoints -= 1;
		std::cout << this->m_name
				<< " got "
				<< amount
				<< " hit points back"
				<< std::endl << std::endl;
		this->m_hitPoints += amount;
	}
	else
	{
		std::cout << this->m_name << " has not more energy points"
					<< std::endl << std::endl;
	}
	return ;
}


// Operator functions ----------------------------------------------------------

std::ostream &operator<<(std::ostream & out, ClapTrap const & src)
{
	out << "Name: " << src.getName() << std::endl
	<< "Hit points: " << src.getHitPoints() << std::endl
	<< "Energy points: " << src.getEnergyPoints() << std::endl
	<< "Attack Damage: " << src.getAttackDamage() << std::endl;
	return (out);
}