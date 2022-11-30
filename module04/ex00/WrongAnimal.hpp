/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-baux <xle-baux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 19:14:10 by xlb               #+#    #+#             */
/*   Updated: 2022/11/30 13:16:44 by xle-baux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
protected:

	std::string type;

public:

// Contructors and Destructor --------------------------------------------------
	WrongAnimal(void); // Default constructor
	WrongAnimal(WrongAnimal const & src); // Copy constructor
	virtual ~WrongAnimal(void); // Destructor
	WrongAnimal & operator=(WrongAnimal const & src); // Copy assignment operator

// Secondary functions ---------------------------------------------------------
	const std::string &getType(void) const;
	
// Mandatory functions ---------------------------------------------------------
	void makeSound(void) const;
};

#endif