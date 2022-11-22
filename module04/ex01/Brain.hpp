/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-baux <xle-baux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 13:40:35 by xle-baux          #+#    #+#             */
/*   Updated: 2022/11/22 14:30:10 by xle-baux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
private:
    std::string m_ideas[100];
	
public:
// Contructors and Destructor --------------------------------------------------
	Brain(void); // Default constructor
	Brain(Brain const & src); // Copy constructor
	~Brain(void); // Destructor
	Brain & operator=(Brain const & src); // Copy assignment operator

// Secondary functions ---------------------------------------------------------

// Mandatory functions ---------------------------------------------------------
};


#endif