/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-baux <xle-baux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 14:54:20 by xle-baux          #+#    #+#             */
/*   Updated: 2022/09/18 17:44:24 by xle-baux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	Contact::fillInfo(std::string tmp[5]) {
	m_first_name = tmp[0];
	m_last_name = tmp[1];
	m_nickname = tmp[2];
	m_phone_number = tmp[3];
	m_secret = tmp[4];
}

std::string	Contact::getFirstName() {
	return m_first_name;
}

std::string	Contact::getLastName() {
	return m_last_name;
}

std::string	Contact::getNickname() {
	return m_nickname;
}

std::string	Contact::getPhoneNumber() {
	return m_phone_number;
}

std::string	Contact::getSecret() {
	return m_secret;
}

void	PhoneBook::addContact(int i)
{
	std::string tmp[5];

	do {
		std::cout << "First Name: ";
		std::getline(std::cin, tmp[0]);
	} while (tmp[0].size() == 0);
	do {
		std::cout << "Last Name: ";
		std::getline(std::cin, tmp[1]);
	} while (tmp[1].size() == 0);
	do {
		std::cout << "Nickname: ";
		std::getline(std::cin, tmp[2]);
	} while (tmp[2].size() == 0);
	do {
		std::cout << "Phone number: ";
		std::getline(std::cin, tmp[3]);
	} while (tmp[3].size() == 0);
	do {
		std::cout << "Secret: ";
		std::getline(std::cin, tmp[4]);
	} while (tmp[4].size() == 0);
	contact[i].fillInfo(tmp);
	std::cout << "\x1B[2J\x1B[H" << "Contact added!" << std::endl << std::endl;
}

void	printInTenChar(std::string tab) {
	int	i(0);

	if (tab.size() < 10) {
		std::cout << tab;
		while (i++ + tab.size() < 10) {
			std::cout << " ";
		}
	}
	else {
		while (i < 9)
		{
			std::cout << tab.at(i++);
		}
		std::cout << ".";
	}
}

void	printLines(Contact contact[8]) {
	int		i(-1);
	char	c;

	while ((contact[++i].getFirstName().size() != 0) && (i < 8)) {
		c = i + 49;
		if (i == 0)
			std::cout << "*===========================================*" << std::endl;
		else
			std::cout << "*-------------------------------------------*" << std::endl;
		std::cout << "*";
		std::cout << "    " << c << "     ";
		std::cout << "|";
		printInTenChar(contact[i].getFirstName());
		std::cout << "|";
		printInTenChar(contact[i].getLastName());
		std::cout << "|";
		printInTenChar(contact[i].getNickname());
		std::cout << "*" << std::endl;
	}
}

bool	isNumber(std::string str) {
	int	i(-1);

	while (++i < int(str.size())) {
		if (!(isdigit(str[i])))
			return false;
	}
	return true;
}

int	getContactIndex() {
	std::string	index_contact;
	
	std::cout << std::endl << "Select contact by index to get mor info: ";
	while (std::getline(std::cin, index_contact)) {
		if (isNumber(index_contact) == true && index_contact.size() != 0) {
			break ;
		}
		else
			std::cout << "Please insert a number: ";
	}
	if (index_contact.size() > 1)
		return 9;
	return index_contact[0] - 49;
}

void	PhoneBook::printContactList() {
	std::cout << "\x1B[2J\x1B[H";
	std::cout << "*********************************************" << std::endl;
	std::cout << "*          |   First  |   Last   |          *" << std::endl;
	std::cout << "*  Index   |   Name   |   Name   | Nickname *" << std::endl;
	std::cout << "*          |          |          |          *" << std::endl;
	printLines(contact);
	std::cout << "*********************************************" << std::endl;
	
}

void	PhoneBook::printContactInfo() {
	int contact_index;

	contact_index = getContactIndex();
	std::cout << "\x1B[2J\x1B[H";
	if (contact_index >= 0 && contact_index < 8) {
		if (contact[contact_index].getFirstName().size() != 0) {
			std::cout << "First Name: "
				<< contact[contact_index].getFirstName()
				<< std::endl;
			std::cout << "Last Name: "
				<< contact[contact_index].getLastName()
				<< std::endl;
			std::cout << "Nickname: "
				<< contact[contact_index].getNickname()
				<< std::endl;
			std::cout << "Phone number: "
				<< contact[contact_index].getPhoneNumber()
				<< std::endl;
			std::cout << "Secret: "
				<< contact[contact_index].getSecret()
				<< std::endl << std::endl;
		}
		else
			std::cout << "Contact not found!" << std::endl << std::endl;
	}
	else
		std::cout << "Contact not found!" << std::endl << std::endl;
}