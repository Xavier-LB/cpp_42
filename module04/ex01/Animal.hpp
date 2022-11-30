/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-baux <xle-baux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 15:54:45 by xle-baux          #+#    #+#             */
/*   Updated: 2022/11/30 16:05:48 by xle-baux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include "Brain.hpp"

class Animal
{
protected:

	std::string type;

public:

// Contructors and Destructor --------------------------------------------------
	Animal(void); // Default constructor
	Animal(Animal const & src); // Copy constructor
	virtual ~Animal(void); // Destructor
	Animal & operator=(Animal const & src); // Copy assignment operator

// Secondary functions ---------------------------------------------------------
	const std::string &getType(void) const;
	virtual Brain *getBrain( void ) const = 0;
	
// Mandatory functions ---------------------------------------------------------
	virtual void makeSound(void) const;
};

#endif