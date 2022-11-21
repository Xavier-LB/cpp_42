/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xlb <xlb@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 15:54:45 by xle-baux          #+#    #+#             */
/*   Updated: 2022/11/20 19:28:25 by xlb              ###   ########.fr       */
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
	virtual ~Animal(void); // Destructor
	Animal & operator=(Animal const & src); // Copy assignment operator

// Secondary functions ---------------------------------------------------------
	const std::string &getType(void) const;
	
// Mandatory functions ---------------------------------------------------------
	virtual void makeSound(void) const;
};

#endif