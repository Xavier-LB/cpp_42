/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xlb <xlb@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 21:07:09 by xlb               #+#    #+#             */
/*   Updated: 2022/11/20 00:25:09 by xlb              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:

// Contructors and Destructor --------------------------------------------------
	ScavTrap(void); // Default constructor
	ScavTrap(ScavTrap const& src); // Copy constructor
	ScavTrap(std::string name);
	ScavTrap & operator=(ScavTrap const & src); // Copy assignment operator
	~ScavTrap(void); // Destructor

// Public mandatory functions --------------------------------------------------

	void attack(const std::string& target);
	void guardGate(void);

};

// Operator functions ----------------------------------------------------------
std::ostream &operator<<(std::ostream & out, ScavTrap const & src);

#endif