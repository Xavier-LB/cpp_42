/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-baux <xle-baux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 16:19:31 by xle-baux          #+#    #+#             */
/*   Updated: 2022/12/11 13:34:32 by xle-baux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdint>
#include <iostream>

struct Data
{
	int a;
	int b;
};

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

int main(void)
{
	Data data;

	data.a = 5;
	data.b = -54;

	std::cout << "initial data values:" << std::endl;
	std::cout << "Data a = " << data.a << std::endl;
	std::cout << "Data b = " << data.b << std::endl;
	std::cout << std::endl;

	std::cout << "Serialize: " << serialize(&data) << std::endl;
	std::cout << std::endl;

	std::cout << "Deserialize: " << deserialize(serialize(&data)) << std::endl;
	std::cout << "Data a = " << deserialize(serialize(&data))->a << std::endl;
	std::cout << "Data b = " << deserialize(serialize(&data))->b << std::endl;

	return 0;
}

uintptr_t serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}
