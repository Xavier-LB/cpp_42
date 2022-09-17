/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MyAwesomePhoneBook.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-baux <xle-baux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 10:34:56 by xle-baux          #+#    #+#             */
/*   Updated: 2022/09/17 18:46:33 by xle-baux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main()
{
	std::string	command;
	PhoneBook	phoneBook;
	int			i;

	i = 0;
	while (std::getline(std::cin, command))
	{
		if (command == "ADD")
			phoneBook.addContact(i++ % 8);
		else if (command == "SEARCH")
			phoneBook.printContactList();
		else if (command == "EXIT")
			return 0;
		else
			std::cout << "Invalid command" << std::endl;
	}
	return 0;
}
