/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-baux <xle-baux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 12:13:04 by xle-baux          #+#    #+#             */
/*   Updated: 2022/10/02 14:33:53 by xle-baux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main() {
	Harl	harl;

	harl.complain("DEBUG");
	harl.complain("INFO");
	harl.complain("WARNING");
	harl.complain("ERROR");
}