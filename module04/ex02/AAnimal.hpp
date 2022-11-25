/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-baux <xle-baux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 15:54:45 by xle-baux          #+#    #+#             */
/*   Updated: 2022/11/25 14:00:25 by xle-baux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>

class AAnimal
{
protected:

	std::string type;

public:

// Contructors and Destructor --------------------------------------------------
	AAnimal(void); // Default constructor
	AAnimal(AAnimal const & src); // Copy constructor
	virtual ~AAnimal(void); // Destructor
	virtual AAnimal & operator=(AAnimal const & src); // Copy assignment operator

// Secondary functions ---------------------------------------------------------
	const std::string &getType(void) const;
	
// Mandatory functions ---------------------------------------------------------
	virtual void makeSound(void) const = 0;
};

#endif