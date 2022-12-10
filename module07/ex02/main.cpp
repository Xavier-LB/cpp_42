/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-baux <xle-baux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 21:26:08 by xlb               #+#    #+#             */
/*   Updated: 2022/12/10 13:30:17 by xle-baux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

void testInt();
void testFloat();
void testChar();
void testCastFromCharToInt();
void testChar_ptr();
void testChar_std_string();
void testException();
void testCopyAssigment();
void testCopyConstructor();

int main ()
{
	testInt();
	testFloat();
	testChar();
	testCastFromCharToInt();
	testChar_ptr();
	testChar_std_string();
	testException();
	testCopyAssigment();
	testCopyConstructor();
	
	return 0;
}

void testInt()
{
	std::cout << "==================================================" << std::endl;
	std::cout << "|                    Test Int                    |" << std::endl;
	std::cout << "==================================================" << std::endl;
	try
	{
		Array<int> test(10);
		for (unsigned int i = 0; i < test.size(); i++)
		{
			test[i] = 1000.1 + i;
		}
		unsigned int i = 0;
		while (i < test.size())
			std::cout << test[i++] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << std::endl;
}

void testFloat()
{
	std::cout << "==================================================" << std::endl;
	std::cout << "|                   Test Float                   |" << std::endl;
	std::cout << "==================================================" << std::endl;
	try
	{
		Array<float> test(10);
		for (unsigned int i = 0; i < test.size(); i++)
		{
			test[i] = (1000 + (static_cast<float>(i) / 10));
		}
		unsigned int i = 0;
		while (i < test.size())
			std::cout << test[i++] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << std::endl;
}

void testChar()
{
	std::cout << "==================================================" << std::endl;
	std::cout << "|                    Test Char                   |" << std::endl;
	std::cout << "==================================================" << std::endl;
	try
	{
		Array<char> test(10);
		for (unsigned int i = 0; i < test.size(); i++)
		{
			test[i] = (90 + i);
		}
		unsigned int i = 0;
		while (i < test.size())
			std::cout << test[i++] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << std::endl;
}

void testCastFromCharToInt()
{
	std::cout << "==================================================" << std::endl;
	std::cout << "|           Test Cast from Char to Int           |" << std::endl;
	std::cout << "==================================================" << std::endl;
	try
	{
		Array<char> test(10);
		for (unsigned int i = 0; i < test.size(); i++)
		{
			test[i] = (90 + i);
		}
		unsigned int i = 0;
		while (i < test.size())
			std::cout << static_cast<int>(test[i++]) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << std::endl;
}

void testChar_ptr()
{
	std::cout << "==================================================" << std::endl;
	std::cout << "|                   Test Char*                   |" << std::endl;
	std::cout << "==================================================" << std::endl;
	try
	{
		char *arrTest[10];
		arrTest[0] = (char *)"array test 1";
		arrTest[1] = (char *)"array ttest 2";
		arrTest[2] = (char *)"array tttest 3";
		arrTest[3] = (char *)"array ttttest 4";
		arrTest[4] = (char *)"array tttttest 5";
		arrTest[5] = (char *)"array ttttttest 6";
		arrTest[6] = (char *)"array tttttttest 7";
		arrTest[7] = (char *)"array ttttttttest 8";
		arrTest[8] = (char *)"array tttttttttest 9";
		arrTest[9] = (char *)"array tttttttttest 10";

		Array<char*> test(10);
		for (unsigned int i = 0; i < test.size(); i++)
		{
			test[i] = arrTest[i];
		}
		unsigned int i = 0;
		while (i < test.size())
			std::cout << test[i++] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << std::endl;
}

void testChar_std_string()
{
	std::cout << "==================================================" << std::endl;
	std::cout << "|                Test std::string                |" << std::endl;
	std::cout << "==================================================" << std::endl;
	try
	{
		std::string arrTest[] = {"array test 1", "array test 2", "array test 3",
							"array test 4", "array test 5", "array test 6",
							"array test 7", "array test 8", "array test 9",
							"array test 10"};
		Array<std::string> test(10);
		for (unsigned int i = 0; i < test.size(); i++)
		{
			test[i] = arrTest[i];
		}
		unsigned int i = 0;
		while (i < test.size())
			std::cout << test[i++] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << std::endl;
}

void testException()
{
	std::cout << "==================================================" << std::endl;
	std::cout << "|              Test Error exception              |" << std::endl;
	std::cout << "==================================================" << std::endl;
	try
	{
		Array<int> test(10);
		for (unsigned int i = 0; i < test.size(); i++)
		{
			test[i] = 1000.1 + i;
		}
		unsigned int i = 0;
		while (i < test.size() + 1)
			std::cout << test[i++] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << std::endl;
}

void testCopyAssigment()
{
	std::cout << "==================================================" << std::endl;
	std::cout << "|         Test Copy assignment operator          |" << std::endl;
	std::cout << "==================================================" << std::endl;
	try
	{
		Array<int> test1(10);
		Array<int> test2(10);
		for (unsigned int i = 0; i < test1.size(); i++)
		{
			test1[i] = 1000.1 + i;
		}
		unsigned int i = 0;
		while (i < test1.size())
			std::cout << "test1 1st print: " << test1[i++] << std::endl;
		
		std::cout << std::endl;
	
	
		test2 = test1;
		i = 0;
		while (i < test2.size())
			std::cout << "test2 1st print: " << test2[i++] << std::endl;

		std::cout << std::endl;
		std::cout << "Changing test1 values...(test1[i] + 1000)" << std::endl << std::endl;
		i = 0;
		for (unsigned int i = 0; i < test1.size(); i++)
		{
			test1[i] = 1000 + test1[i];
		}

		i = 0;
		while (i < test1.size())
			std::cout << "test1 2st print: " << test1[i++] << std::endl;

		std::cout << std::endl;

		i = 0;
		while (i < test2.size())
			std::cout << "test2 2st print: " << test2[i++] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << std::endl;
}

void testCopyConstructor()
{
	std::cout << "==================================================" << std::endl;
	std::cout << "|             Test Copy constructor              |" << std::endl;
	std::cout << "==================================================" << std::endl;
	try
	{
		Array<int> test1(10);
		for (unsigned int i = 0; i < test1.size(); i++)
		{
			test1[i] = 1000.1 + i;
		}
		unsigned int i = 0;
		while (i < test1.size())
			std::cout << "test1 1st print: " << test1[i++] << std::endl;
		
		std::cout << std::endl;
	
	
		Array<int> test2(test1);
		i = 0;
		while (i < test2.size())
			std::cout << "test2 1st print: " << test2[i++] << std::endl;

		std::cout << std::endl;
		std::cout << "Changing test1 values...(test1[i] + 1000)" << std::endl << std::endl;
		i = 0;
		for (unsigned int i = 0; i < test1.size(); i++)
		{
			test1[i] = 1000 + test1[i];
		}

		i = 0;
		while (i < test1.size())
			std::cout << "test1 2st print: " << test1[i++] << std::endl;

		std::cout << std::endl;

		i = 0;
		while (i < test2.size())
			std::cout << "test2 2st print: " << test2[i++] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << std::endl;
}