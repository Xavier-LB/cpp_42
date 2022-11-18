/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-baux <xle-baux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 15:01:22 by xle-baux          #+#    #+#             */
/*   Updated: 2022/11/18 16:49:49 by xle-baux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

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

//------------------------------------------------------------------------------

	Fixed(int const arg);
	Fixed(float const arg);
	float toFloat( void ) const;
	int toInt( void ) const;
};

std::ostream& operator << ( std::ostream& output, const Fixed& f );

#endif