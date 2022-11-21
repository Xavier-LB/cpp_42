/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-baux <xle-baux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 12:52:15 by xlb               #+#    #+#             */
/*   Updated: 2022/11/21 14:53:21 by xle-baux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class  ClapTrap
{
private:
	std::string		m_name;
	unsigned int	m_hitPoints;
	unsigned int	m_energyPoints;
	unsigned int	m_attackDamage;
	
public:

// Contructors and Destructor --------------------------------------------------
	ClapTrap(void); // Default constructor
	ClapTrap(ClapTrap const& src); // Copy constructor
	ClapTrap(std::string name);
	ClapTrap & operator=(ClapTrap const & src); // Copy assignment operator
	~ClapTrap(); // Destructor


// Set values functions --------------------------------------------------------
	void setAttackDamage(unsigned int attackDamage);

// Get values functions --------------------------------------------------------
	std::string getName(void) const;
	unsigned int getHitPoints(void) const;
	unsigned int getEnergyPoints(void) const;
	unsigned int getAttackDamage(void) const;


// Public mandatory functions --------------------------------------------------
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

// Operator functions ----------------------------------------------------------
std::ostream &operator<<(std::ostream & out, ClapTrap const & src);

#endif
