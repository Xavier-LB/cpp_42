/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-baux <xle-baux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 16:36:03 by xle-baux          #+#    #+#             */
/*   Updated: 2022/12/10 19:56:51 by xle-baux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	try
	{
		Span span(4);

		span.addNumber(3);
		span.addNumber(0);
		span.addNumber(5);
		span.addNumber(1);

		std::cout << span.longestSpan() << std::endl;
		std::cout << span.shortestSpan() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}