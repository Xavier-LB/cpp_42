/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-baux <xle-baux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 15:42:49 by xle-baux          #+#    #+#             */
/*   Updated: 2022/12/05 20:04:46 by xle-baux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include "Form.hpp"
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

	Form* makeForm(const std::string & formName, const std::string & target) const;

	Form* createShrubberyCreationForm(std::string const & target) const;
	Form* createRobotomyRequestForm(std::string const & target) const;
	Form* createPresidentialPardonForm(std::string const & target) const;

	class UnknowFormException : public std::exception
	{
		const char *what() const throw();
	};
};

#endif