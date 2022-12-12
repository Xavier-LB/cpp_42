/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-baux <xle-baux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 14:44:07 by xle-baux          #+#    #+#             */
/*   Updated: 2022/12/12 14:43:05 by xle-baux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <algorithm>
#include <exception>

class notFound : public std::exception
{
	const char *what() const throw()
	{
		return "Not Found!";
	};
};

template<typename T>
typename T::iterator easyfind(T &container, int i)
{
	typename T::iterator it;

	it = std::find(container.begin(), container.end(), i);
	if (it != container.end())
		return(it);
	throw notFound();
};

#endif