/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-baux <xle-baux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 14:44:41 by xle-baux          #+#    #+#             */
/*   Updated: 2022/12/12 14:44:05 by xle-baux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

#include <iostream>
#include <vector>

int main()
{
	try
	{
		int arr[] = {1, 2, 3, 4, 5};
		std::vector<int>::iterator find;

		std::vector<int> vect(arr, arr + sizeof(arr) / sizeof(int));
		find = easyfind(vect, 2);
		std::cout << "Found: " << *find << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;;
	}

	return 0;
}
