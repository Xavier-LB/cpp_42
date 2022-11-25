/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-baux <xle-baux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 19:17:18 by xlb               #+#    #+#             */
/*   Updated: 2022/11/25 12:16:32 by xle-baux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
private:
	
public:
// Contructors and Destructor --------------------------------------------------
	WrongCat(void); // Default constructor
	WrongCat(WrongCat const & src); // Copy constructor
	~WrongCat(void); // Destructor
	WrongCat & operator=(WrongCat const & src); // Copy assignment operator

// Secondary functions ---------------------------------------------------------
	std::string getType(void);

// Mandatory functions ---------------------------------------------------------
	void makeSound(void) const;
};


#endif