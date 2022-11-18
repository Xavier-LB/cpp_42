/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-baux <xle-baux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 14:38:36 by xle-baux          #+#    #+#             */
/*   Updated: 2022/11/18 17:02:50 by xle-baux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	Fixed::value = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed & Fixed::operator=( Fixed const & src)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->value = src.getRawBits();
	return *this;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	return this->value;
}

void Fixed::setRawBits(int const raw)
{
	this->value = raw;
}

//------------------------------------------------------------------------------

Fixed::Fixed(int const arg)
{
	std::cout << "Int constructor called" << std::endl;
	setRawBits(arg << fixed_point);
}

Fixed::Fixed(float const arg)
{
	std::cout << "Float constructor called" << std::endl;
	setRawBits((int)roundf(arg * (1 << this->fixed_point)));
}

float Fixed::toFloat( void ) const
{
	return((float)this->getRawBits() / (1 << this->fixed_point));
}

int Fixed::toInt( void ) const
{
	return(this->getRawBits() >> this->fixed_point);
}

std::ostream& operator << ( std::ostream& output, const Fixed& f )
{
	output << f.toFloat();
	return (output);
}
