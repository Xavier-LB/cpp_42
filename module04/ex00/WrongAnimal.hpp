/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xlb <xlb@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 19:14:10 by xlb               #+#    #+#             */
/*   Updated: 2022/11/20 19:28:14 by xlb              ###   ########.fr       */
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
	virtual void makeSound(void) const;
};

#endif