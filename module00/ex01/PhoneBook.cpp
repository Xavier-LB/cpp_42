/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-baux <xle-baux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 14:54:20 by xle-baux          #+#    #+#             */
/*   Updated: 2022/09/17 20:18:29 by xle-baux         ###   ########.fr       */
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
}

void	PhoneBook::printContactList() {
	std::cout << " __________ __________ __________ __________" << std::endl;
	std::cout << "|  Index   |__________|__________|__________|" << std::endl;
	std::cout << "|__________|__________|__________|__________|" << std::endl;
	std::cout << contact[0].getFirstName() << std::endl;
}