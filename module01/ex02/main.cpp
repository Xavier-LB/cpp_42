/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-baux <xle-baux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 11:46:25 by xle-baux          #+#    #+#             */
/*   Updated: 2022/10/06 13:50:26 by xle-baux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main( void )
{
	std::string	string = "HI THIS IS BRAIN";
	std::string	*stringPTR = &string;
	std::string	&stringREF = string;

	std::cout << "Memory Address" << std::endl;
	std::cout << "string:\t\t" << &string << std::endl;
	std::cout << "stringPTR:\t" << stringPTR << std::endl;
	std::cout << "stringREF:\t" << &stringREF << std::endl << std::endl;

	std::cout << "Value" << std::endl;
	std::cout << "string:\t\t" << string << std::endl;
	std::cout << "stringPTR:\t" << *stringPTR << std::endl;
	std::cout << "stringREF:\t" << stringREF << std::endl;

	return 0;
}
