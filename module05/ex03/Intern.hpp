/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-baux <xle-baux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 15:42:49 by xle-baux          #+#    #+#             */
/*   Updated: 2022/12/09 12:26:07 by xle-baux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include "AForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern
{
private:

public:
	Intern();
	Intern(Intern const & src);
	Intern & operator=(Intern const & src);
	virtual ~Intern();

	AForm* makeForm(const std::string & formName, const std::string & target) const;

	AForm* createShrubberyCreationForm(std::string const & target) const;
	AForm* createRobotomyRequestForm(std::string const & target) const;
	AForm* createPresidentialPardonForm(std::string const & target) const;

	class UnknowFormException : public std::exception
	{
		const char *what() const throw();
	};
};

#endif