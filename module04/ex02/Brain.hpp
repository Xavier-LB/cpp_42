/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-baux <xle-baux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 13:40:35 by xle-baux          #+#    #+#             */
/*   Updated: 2022/11/30 17:42:58 by xle-baux         ###   ########.fr       */
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
	void setIdea(std::string idea, int i);
	std::string getIdea(int i) const;

// Mandatory functions ---------------------------------------------------------
};


#endif