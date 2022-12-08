/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-baux <xle-baux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 09:55:24 by xle-baux          #+#    #+#             */
/*   Updated: 2022/12/07 16:12:54 by xle-baux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

int main(int argc, char const *argv[])
{
	long double	ldNum;
	char		*endPtr;

	if (argc != 2)
		return (std::cerr << "Error: Wrong num of arg!" << std::endl, 1);
	if (strlen(argv[1]) == 0)
		return (std::cerr << "Error: Empty arg!" << std::endl, 1);
	ldNum = strtold(argv[1], &endPtr);
	if ((strlen(endPtr) > 1)
		|| (argv[1][0] <= '9'
		&& argv[1][0] >= '0'
		&& strlen(endPtr) == 1
		&& endPtr[0] != 'f'))
			return (std::cerr << "Error: String aren't accepted!" << std::endl, 1);
	if ((isascii(argv[1][0]) && !std::isnan(ldNum) && !(isdigit(argv[1][0]))
		&& argv[1][0] != '-' && argv[1][0] != '+')
		|| (strlen(argv[1]) == 1 && (argv[1][0] == '-' || argv[1][0] == '+')))
			ldNum = static_cast<int>(argv[1][0]);
	if (strlen(argv[1]) == 1 && (argv[1][0] == '-' || argv[1][0] == '+'))
		ldNum = static_cast<int>(argv[1][0]);

	printAsChar(ldNum);
	printAsInt(ldNum);
	printAsFloat(ldNum);
	printAsDouble(ldNum);

	return (0);
}
