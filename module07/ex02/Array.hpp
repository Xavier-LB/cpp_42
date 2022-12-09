/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-baux <xle-baux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 21:26:22 by xlb               #+#    #+#             */
/*   Updated: 2022/12/09 18:11:07 by xle-baux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <class T>
class Array
{
private:
	T				*m_array;
	unsigned int	m_size;

public:
	Array(void) : m_array(new T()), m_size(0) {};
	Array(unsigned int n) : m_array(new T[n]), m_size(n) {};

	Array(Array<T> const & src) : m_array(new T[src.m_size]), m_size(src.m_size)
	{
		for (unsigned int i = 0; i < src.m_size; i++)
			this->m_array[i] = src.m_array[i];  
	};
	
	Array &operator=(Array<T> const & src)
	{
		if (this != &src)
		{
			delete [] this->m_array;
			this->m_array = new T[src.m_size];
			this->m_size = src.m_size;
			for (unsigned int i = 0; i < src.m_size; i++)
				this->m_array[i] = src.m_array[i];  
		}
		return *this;
	};
	
	~Array(void) {delete [] m_array;};

	class IndexIsOutOfBounds : public std::exception
	{
		const char *what() const throw()
		{
			return "index is out of bounds";
		};
	};

	unsigned int size(void) {return (this->m_size);};
};

// std::ostream & operator<<(std::ostream & out, const Array<T> & src)
// {
// 	out << 
// 	return out;
// }