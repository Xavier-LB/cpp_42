/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-baux <xle-baux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 14:30:12 by xle-baux          #+#    #+#             */
/*   Updated: 2022/09/29 15:39:09 by xle-baux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

std::string replace(std::string line, std::string s1, std::string s2)
{
	std::stringstream	str;
	size_t		j;
	size_t		len_s1(s1.length());

	for (size_t i = 0; i < line.length(); i++)
	{
		j = 0;
		while (line[i + j] == s1[j] && j < len_s1)
			j++;
		if (j == len_s1)
		{
			str << s2;
			i += (j - 1);
		}
		else
			str << line[i];
	}
	return str.str();
}

int main(int argc, char *argv[])
{
	if (argc != 4)
		return (1);
	std::string filename (argv[1]);
	std::string s1(argv[2]);
	std::string s2(argv[3]);
	std::string newFilename;
	std::string line;
	std::ifstream infile;
	std::ofstream outfile;

	infile.open(argv[1], std::ios::in);
	newFilename = filename + ".replace";
	outfile.open(newFilename.c_str(), std::ios::trunc);

	while (std::getline(infile, line))
	{
		outfile << replace(line, s1, s2);
		outfile << std::endl;
	}

	return 0;
}
