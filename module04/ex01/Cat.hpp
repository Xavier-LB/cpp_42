/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-baux <xle-baux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 15:57:47 by xle-baux          #+#    #+#             */
/*   Updated: 2022/11/30 16:05:19 by xle-baux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
private:
	Brain *m_brain;
	
public:
// Contructors and Destructor --------------------------------------------------
	Cat(void); // Default constructor
	Cat(Cat const & src); // Copy constructor
	~Cat(void); // Destructor
	Cat & operator=(Cat const & src); // Copy assignment operator

// Secondary functions ---------------------------------------------------------
	virtual std::string getType(void);
	virtual Brain *getBrain(void) const;

// Mandatory functions ---------------------------------------------------------
	virtual void makeSound(void) const;
};


#endif