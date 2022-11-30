/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-baux <xle-baux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 13:40:17 by xle-baux          #+#    #+#             */
/*   Updated: 2022/11/30 17:42:45 by xle-baux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

// Contructors and Destructor --------------------------------------------------
Brain::Brain(void)
{
	std::cout << "(Brain) Default constructor" << std::endl;
}

Brain::Brain(Brain const & src)
{
	*this = src;
	std::cout << "(Brain) Copy constructor" << std::endl;
}

Brain::~Brain(void)
{
	std::cout << "(Brain) Destructor" << std::endl;
}

Brain & Brain::operator=(Brain const & src)
{
    if (this != &src)
    {
        for (int i = 0; i < 100; i++)
        {
	        this->m_ideas[i] = src.m_ideas[i];
        }
    }
	std::cout << "(Brain) Copy assignment operator" << std::endl;
	return *this;
}

// Secondary functions ---------------------------------------------------------

void Brain::setIdea(std::string idea, int i)
{
	this->m_ideas[i] = idea;
}

std::string Brain::getIdea(int i) const
{
	return (this->m_ideas[i]);
}

// Mandatory functions ---------------------------------------------------------
