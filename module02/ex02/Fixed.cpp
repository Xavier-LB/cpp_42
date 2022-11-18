/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xlb <xlb@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 14:38:36 by xle-baux          #+#    #+#             */
/*   Updated: 2022/11/18 22:14:02 by xlb              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	Fixed::value = 0;
}

Fixed::Fixed(const Fixed &src)
{
	*this = src;
}

Fixed & Fixed::operator=( Fixed const & src)
{
	this->value = src.getRawBits();
	return *this;
}

Fixed::~Fixed()
{

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
	setRawBits(arg << fixed_point);
}

Fixed::Fixed(float const arg)
{
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

//------------------------------------------------------------------------------

bool Fixed::operator>(Fixed const &src) const
{
	return (this->getRawBits() > src.getRawBits());
}

bool Fixed::operator<(Fixed const &src) const
{
	return (this->getRawBits() < src.getRawBits());
}

bool Fixed::operator>=(Fixed const &src) const
{
	return (this->getRawBits() >= src.getRawBits());
}

bool Fixed::operator<=(Fixed const &src) const
{
	return (this->getRawBits() <= src.getRawBits());
}

bool Fixed::operator==(Fixed const &src) const
{
	return (this->getRawBits() == src.getRawBits());
}

bool Fixed::operator!=(Fixed const &src) const
{
	return (this->getRawBits() != src.getRawBits());
}

Fixed Fixed::operator+(Fixed const &src)
{
	Fixed tmp(*this);

	tmp.setRawBits(this->getRawBits() + src.getRawBits());
	return (tmp);
}

Fixed Fixed::operator-(Fixed const &src)
{
	Fixed tmp(*this);

	tmp.setRawBits(this->getRawBits() - src.getRawBits());
	return (tmp);
}

Fixed Fixed::operator*(Fixed const &src)
{
	Fixed tmp(this->toFloat() * src.toFloat());

	return (tmp);
}

Fixed Fixed::operator/(Fixed const &src)
{
	Fixed tmp(this->toFloat() / src.toFloat());

	return (tmp);
}

Fixed Fixed::operator++(int)
{
	Fixed	old(*this);

	this->value++;
	return(old);
}

Fixed Fixed::operator++()
{
	this->value++;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed	old(*this);

	this->value--;
	return(old);
}

Fixed Fixed::operator--()
{
	this->value--;
	return (*this);
}

Fixed const &Fixed::min(Fixed const &a, Fixed const &b)
{
	if (a > b)
		return (b);
	return (a);
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if (a > b)
		return (b);
	return (a);
}

Fixed const &Fixed::max(Fixed const &a, Fixed const &b)
{
	if (a < b)
		return (b);
	return (a);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if (a < b)
		return (b);
	return (a);
}
