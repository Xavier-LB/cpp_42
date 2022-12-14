/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-baux <xle-baux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 15:22:28 by xle-baux          #+#    #+#             */
/*   Updated: 2022/11/18 14:20:35 by xle-baux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
private:
	int					value;
	static const int	fixed_point = 8;

public:
	Fixed();
	Fixed(const Fixed &src);
	Fixed & operator=( Fixed const & src);
	~Fixed();
	
	int getRawBits(void) const;
	void setRawBits(int const raw);
};


#endif