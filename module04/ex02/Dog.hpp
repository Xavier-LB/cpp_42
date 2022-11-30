/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-baux <xle-baux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 15:56:54 by xle-baux          #+#    #+#             */
/*   Updated: 2022/11/30 17:44:43 by xle-baux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog : public AAnimal
{
private:
	Brain *m_brain;
	
public:
// Contructors and Destructor --------------------------------------------------
	Dog(void); // Default constructor
	Dog(Dog const & src); // Copy constructor
	~Dog(void); // Destructor
	Dog & operator=(Dog const & src); // Copy assignment operator

// Secondary functions ---------------------------------------------------------
	std::string getType(void);
	virtual Brain *getBrain(void) const;

// Mandatory functions ---------------------------------------------------------
	virtual void makeSound(void) const;
};


#endif