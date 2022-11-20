/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-baux <xle-baux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 15:54:45 by xle-baux          #+#    #+#             */
/*   Updated: 2022/11/20 17:29:35 by xle-baux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
protected:
	std::string type;


public:

// Contructors and Destructor --------------------------------------------------
	Animal(void); // Default constructor
	Animal(Animal const & src); // Copy constructor
	~Animal(void); // Destructor
	Animal & operator=(Animal const & src); // Copy assignment operator

// Secondary functions ---------------------------------------------------------
	const std::string &getType(void) const;
	
// Mandatory functions ---------------------------------------------------------
	virtual void makeSound(void) const;
};

#endif