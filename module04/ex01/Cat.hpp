/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-baux <xle-baux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 15:57:47 by xle-baux          #+#    #+#             */
/*   Updated: 2022/11/20 17:29:54 by xle-baux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal
{
private:
	
public:
// Contructors and Destructor --------------------------------------------------
	Cat(void); // Default constructor
	Cat(Cat const & src); // Copy constructor
	~Cat(void); // Destructor
	Cat & operator=(Cat const & src); // Copy assignment operator

// Secondary functions ---------------------------------------------------------
	std::string getType(void);

// Mandatory functions ---------------------------------------------------------
	virtual void makeSound(void) const;
};


#endif