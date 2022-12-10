/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-baux <xle-baux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 16:36:33 by xle-baux          #+#    #+#             */
/*   Updated: 2022/12/10 19:56:38 by xle-baux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : m_n(0) {}

Span::Span(unsigned int n) : m_n(n) {}

Span::Span(Span const & src) : m_n(src.m_n), m_list(src.m_list) {*this = src;}

Span::~Span() {}


Span & Span::operator=(Span const & src)
{
	if (this != &src)
	{
		this->m_n = src.m_n;
		this->m_list = src.m_list;
	}
	return (*this);
}

void Span::addNumber(int i)
{
	if (m_list.size() >= m_n)
		throw std::out_of_range("List is full!");
	m_list.insert(m_list.end(), i);
}


unsigned int Span::shortestSpan()
{
	std::list<int>				tmp(m_list);
	std::list<int>::iterator	shortest1;

	if (m_list.size() < 1)
		throw std::out_of_range("No numbers stored");
	if (m_list.size() == 1)
		throw std::out_of_range("Only one number stored");
	
	shortest1 = std::min_element(m_list.begin(), m_list.end());
	if ((count(m_list.begin(), m_list.end(), *shortest1)) != 1)
		return (0);
	tmp.remove(*shortest1);
	return (*(std::min_element(tmp.begin(), tmp.end())) - *shortest1);
}

unsigned int Span::longestSpan()
{
	if (m_list.size() < 1)
		throw std::out_of_range("No numbers stored");
	if (m_list.size() == 1)
		throw std::out_of_range("Only one number stored");
	return (*(std::max_element(m_list.begin(), m_list.end())) - *(std::min_element(m_list.begin(), m_list.end())));
}
