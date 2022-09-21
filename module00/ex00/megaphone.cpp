/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-baux <xle-baux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 11:55:03 by xle-baux          #+#    #+#             */
/*   Updated: 2022/09/21 11:55:04 by xle-baux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
#include <cstring>

int main(int argc, char const *argv[])
{
	int		i;
	char	c;

	if (argc == 1) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	}
	else {
		for (int j = 1; j < argc; j++) {
			i = 0;
			while (argv[j][i]) {
				c = toupper(argv[j][i++]);
				std::cout << c;
			}
			if (j < argc - 1) {
				std::cout << " ";
			}
		}
	}
	std::cout << std::endl;
	return 0;
}