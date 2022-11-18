/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xlb <xlb@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 15:01:22 by xle-baux          #+#    #+#             */
/*   Updated: 2022/11/18 22:13:22 by xlb              ###   ########.fr       */
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

//------------------------------------------------------------------------------

	bool operator>(Fixed const &src) const;
	bool operator<(Fixed const &src) const;
	bool operator>=(Fixed const &src) const;
	bool operator<=(Fixed const &src) const;
	bool operator==(Fixed const &src) const;
	bool operator!=(Fixed const &src) const;

	Fixed operator+(Fixed const &src);
	Fixed operator-(Fixed const &src);
	Fixed operator*(Fixed const &src);
	Fixed operator/(Fixed const &src);

	Fixed operator++(int);
	Fixed operator++();
	Fixed operator--(int);
	Fixed operator--();

	static Fixed const &min(Fixed const &a, Fixed const &b);
	static Fixed &min(Fixed &a, Fixed &b);
	static Fixed const &max(Fixed const &a, Fixed const &b);
	static Fixed &max(Fixed &a, Fixed &b);
};

std::ostream& operator << ( std::ostream& output, const Fixed& f );

#endif