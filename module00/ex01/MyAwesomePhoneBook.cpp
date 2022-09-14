/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MyAwesomePhoneBook.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-baux <xle-baux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 10:34:56 by xle-baux          #+#    #+#             */
/*   Updated: 2022/09/14 17:45:16 by xle-baux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Contact
{
	std::string	m_first_name;
	std::string	m_last_name;
	std::string	m_nickname;
	int			m_phone_number;
	std::string	secret;
	
};

int main(int argc, char const *argv[])
{
	std::string command;
	Contact phoneBook[8];

	while (1)
	{
		std::getline(std::cin, command);
		if (command == "ADD")
		{
			std::cout << "was add" << std::endl;
		}
		else if (command == "SEARCH")
		{
			std::cout << "was search" << std::endl;
		}
		else if (command == "EXIT")
		{
			return 0;
		}
		else
		{
			std::cout << "Invalid command" << std::endl;
		}
	}
	return 0;
}
