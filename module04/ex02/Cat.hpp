/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-baux <xle-baux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 15:57:47 by xle-baux          #+#    #+#             */
/*   Updated: 2022/11/30 17:44:35 by xle-baux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class Cat : public AAnimal
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
	std::string getType(void);
	virtual Brain *getBrain(void) const;

// Mandatory functions ---------------------------------------------------------
	virtual void makeSound(void) const;
};


#endif