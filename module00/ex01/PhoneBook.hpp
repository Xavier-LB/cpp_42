/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-baux <xle-baux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 14:53:23 by xle-baux          #+#    #+#             */
/*   Updated: 2022/09/20 15:08:52 by xle-baux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
# include <stdlib.h>

class	Contact
{
private:

	std::string	m_first_name;
	std::string	m_last_name;
	std::string	m_nickname;
	std::string	m_phone_number;
	std::string	m_secret;


public:

	void		fillInfo(std::string tmp[5]);
	std::string	getFirstName();
	std::string	getLastName();
	std::string	getNickname();
	std::string	getPhoneNumber();
	std::string	getSecret();
	
};

class	PhoneBook
{

private:

	Contact contact[8];


public:

	void	addContact(int i);
	void	printContactList();
	void	printContactInfo();

};

#endif