/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-baux <xle-baux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 16:36:20 by xle-baux          #+#    #+#             */
/*   Updated: 2022/12/10 19:23:10 by xle-baux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <list>
#include <exception>

class Span
{
private:
	unsigned int	m_n;
	std::list<int>	m_list;
	
public:
	Span();
	Span(unsigned int n);
	Span(Span const & src);

	~Span();

	Span & operator=(Span const & src);

	void addNumber(int i);

	unsigned int shortestSpan();
	unsigned int longestSpan();
};

#endif