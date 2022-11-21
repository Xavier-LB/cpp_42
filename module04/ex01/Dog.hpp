/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-baux <xle-baux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 15:56:54 by xle-baux          #+#    #+#             */
/*   Updated: 2022/11/20 17:29:56 by xle-baux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal
{
private:
	
public:
// Contructors and Destructor --------------------------------------------------
	Dog(void); // Default constructor
	Dog(Dog const & src); // Copy constructor
	~Dog(void); // Destructor
	Dog & operator=(Dog const & src); // Copy assignment operator

// Secondary functions ---------------------------------------------------------
	std::string getType(void);

// Mandatory functions ---------------------------------------------------------
	virtual void makeSound(void) const;
};


#endif