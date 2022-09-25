/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-baux <xle-baux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 14:30:12 by xle-baux          #+#    #+#             */
/*   Updated: 2022/09/25 15:57:06 by xle-baux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>  

int main(int argc, char *argv[])
{
	std::string filename;
	std::string s1;
	std::string s2;
	std::string newFilename;
	std::string test;

	if (argc != 4)
		return (1);
	filename = argv[1];
	s1 = argv[2];
	s2 = argv[3];
	newFilename = filename + ".replace";
	// std::ofstream outfile (newFilename.c_str());
	std::cout << test.ope;
	// outfile << "Hello, rld\n" << std::endl;

	return 0;
}
