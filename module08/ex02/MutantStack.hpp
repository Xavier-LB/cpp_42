/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-baux <xle-baux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 16:58:04 by xle-baux          #+#    #+#             */
/*   Updated: 2022/12/12 14:23:43 by xle-baux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUNTANTSTACK_HPP
# define MUNTANTSTACK_HPP


# include <stack>

template<class T>
class MutantStack : public std::stack<T>
{
private:

public:
	MutantStack(void) {return;}
	MutantStack(MutantStack const & src) {*this = src;}
	~MutantStack(void) {return;}
	MutantStack & operator=(MutantStack const & src)
	{
		this->c = src.c;
		return *this;
	}

	typedef typename std::stack<T>::container_type::iterator iterator;

	iterator	begin(void) {return this->c.begin();}
	iterator	end(void) {return this->c.end();}

	typedef typename std::stack<T>::container_type::reverse_iterator r_iterator;

	r_iterator	rbegin(void) {return this->c.rbegin();}
	r_iterator	rend(void) {return this->c.rend();}
};


#endif