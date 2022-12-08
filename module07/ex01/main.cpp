/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-baux <xle-baux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 16:05:04 by xle-baux          #+#    #+#             */
/*   Updated: 2022/12/08 18:02:20 by xle-baux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>
#include <cstdlib>
#include <unistd.h>
#include <ctime>


int main()
{
	
	return 0;
}

template <typename T>
void iter(T & array, int len, void (*function)(T))
{
	for (int i(0); i < len; i++)
	{
		function()(array[i]);
	}
}