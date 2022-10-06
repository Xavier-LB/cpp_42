/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-baux <xle-baux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 10:03:24 by xle-baux          #+#    #+#             */
/*   Updated: 2022/10/06 13:34:48 by xle-baux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde( int N, std::string name )
{	
	int		i(-1);
	Zombie	*zombieH = new Zombie[N];
	
	if (!zombieH)
		return (NULL);

	while (++i < N) {
		zombieH[i].setName(name);
	}
	return (zombieH);
}
