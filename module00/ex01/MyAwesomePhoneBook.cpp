/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MyAwesomePhoneBook.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-baux <xle-baux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 10:34:56 by xle-baux          #+#    #+#             */
/*   Updated: 2022/09/18 17:38:34 by xle-baux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main()
{
	int			i;
	PhoneBook	phoneBook;
	std::string	command;
	std::string	index_contact;

	std::cout << "\x1B[2J\x1B[H";
	i = 0;
	while (std::getline(std::cin, command))
	{
		if (command == "ADD") {
			std::cout << "\x1B[2J\x1B[H";
			phoneBook.addContact(i++ % 8);
		}
		else if (command == "SEARCH")
		{
			phoneBook.printContactList();
			phoneBook.printContactInfo();
		}
		else if (command == "EXIT") {
			std::cout << "\x1B[2J\x1B[H";
			return 0;
		}
		else
			std::cout << "Invalid command" << std::endl;
	}
	return 0;
}
