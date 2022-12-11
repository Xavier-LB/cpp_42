/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-baux <xle-baux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 09:55:16 by xle-baux          #+#    #+#             */
/*   Updated: 2022/12/11 13:09:04 by xle-baux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

void	printAsChar(long double ldNum)
{
	if (ldNum < 0 || ldNum > 127 || std::isnan(ldNum))
		std::cout << "char: impossible" << std::endl;
	else if(!isprint(ldNum))
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: " << static_cast<char>(ldNum) << std::endl;
}

void	printAsInt(long double ldNum)
{
	if (ldNum > 2147483647 || ldNum < -2147483648 || std::isnan(ldNum))
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(ldNum) << std::endl;
}

void	printAsFloat(long double ldNum)
{
	std::cout << "float: " << static_cast<float>(ldNum);
    if (ldNum == static_cast<int>(ldNum))
        std::cout << ".0";
    std::cout << 'f' << std::endl;
}

void	printAsDouble(long double ldNum)
{
	std::cout << "double: " << static_cast<double>(ldNum);
	if (ldNum == static_cast<int>(ldNum))
        std::cout << ".0";
	std::cout << std::endl;
}

