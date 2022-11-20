/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-baux <xle-baux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 21:07:09 by xlb               #+#    #+#             */
/*   Updated: 2022/11/20 14:34:02 by xle-baux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:

// Contructors and Destructor --------------------------------------------------
	FragTrap(void); // Default constructor
	FragTrap(FragTrap const& src); // Copy constructor
	FragTrap(std::string name);
	FragTrap & operator=(FragTrap const & src); // Copy assignment operator
	~FragTrap(void); // Destructor

// Public mandatory functions --------------------------------------------------

	void highFivesGuys(void);
};

// Operator functions ----------------------------------------------------------
std::ostream &operator<<(std::ostream & out, FragTrap const & src);

#endif