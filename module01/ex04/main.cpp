/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-baux <xle-baux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 14:30:12 by xle-baux          #+#    #+#             */
/*   Updated: 2022/10/09 16:28:45 by xle-baux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>
#include <cstring>

std::string	replace(std::string content, char* s1, char* s2)
{
	size_t pos;
	size_t srcLen(strlen(s1));

	pos = content.find(s1, 0, srcLen);
	while (pos != std::string::npos)
	{
		content.erase(pos, srcLen);
		content.insert(pos, s2);
		pos = pos + srcLen;
		pos = content.find(s1, 0, srcLen);
	}
	return (content);
}

int main(int argc, char *argv[])
{
	std::string			newFilename;
	std::string			newContent;
	std::ifstream		infile;
	std::ofstream		outfile;
	std::stringstream	fileContent;

	if (argc != 4)
	{
		std::cout << "[ERROR] Wrong num of aguments!" << std::endl;
		return (1);
	}

	std::string			s1(argv[2]);
	std::string			s2(argv[3]);
	if ((s2.find(s1)) != std::string::npos || !(strcmp(argv[2], argv[3])))
	{
		std::cout << "[ERROR] The content of s1 must not be present in s2 " << std::endl;
		return (1);
	}

	newFilename = argv[1];
	newFilename.append(".replace");

	infile.open(argv[1]);
	outfile.open(newFilename.c_str());

	if (!infile || !(infile.is_open()) || !(outfile.is_open()))
	{
		std::cout << "[ERROR] Opening files!" << std::endl;
		return (1);
	}

	fileContent << infile.rdbuf();
	newContent = replace(fileContent.str(), argv[2], argv[3]);
	outfile.write(newContent.c_str(), newContent.size());
	
	infile.close();
	outfile.close();
	return (0);
}

// #include <iostream>
// #include <fstream>
// #include <ostream>
// #include <cstring>

// std::string fileRead(std::ifstream &readFile)
// {
// 	std::string s;

// 	readFile.seekg(1, std::ios::end);
// 	int size = readFile.tellg();
// 	s.resize(size);
// 	readFile.seekg(0, std::ios::beg);
// 	readFile.read(&s[0], size);

// 	return (s);
// }

// void ftReplace(std::string &contents, char *s1, char *s2)
// {
// 	std::string::size_type targetStrLen = (strlen(s1));
// 	std::string::size_type pos;

// 	pos = contents.find(s1,0, targetStrLen);
// 	while(pos != std::string::npos)
// 	{
// 		contents.erase(pos, targetStrLen);
// 		contents.insert(pos,s2);
// 		pos = pos + targetStrLen;
// 		pos = contents.find(s1,pos, targetStrLen);
// 	}
// }


// int main(int argc, char **argv)
// {
// 	std::ifstream readFile;
// 	std::ofstream writeFile;
// 	std::string newFile;

// 	if (argc != 4)
// 	{
// 		std::cout << "[Error]" << std::endl;
// 		return (1);
// 	}

// 	newFile = argv[1];
// 	newFile.append(".replace");
// 	readFile.open(argv[1]);
// 	writeFile.open(newFile);
// 	if (!readFile || !(readFile.is_open()) | !(writeFile.is_open()))
// 	{
// 		std::cout << "[Error]" << std::endl;
// 		readFile.close();
// 		return(1);
// 	}
// 	std::string FileContents;
// 	FileContents = fileRead(readFile);
// 	ftReplace(FileContents, argv[2], argv[3]);
// 	writeFile.write(FileContents.c_str(), FileContents.size());
// 	readFile.close();
// 	writeFile.close();
// }
