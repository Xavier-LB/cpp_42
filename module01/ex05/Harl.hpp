/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-baux <xle-baux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 12:13:14 by xle-baux          #+#    #+#             */
/*   Updated: 2022/10/02 14:32:50 by xle-baux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

class Harl
{

private:
	void debug( void );
	void info( void );
	void warning( void );
	void error( void );


public:

	Harl();
	~Harl();
	void complain( std::string level );
};




#endif