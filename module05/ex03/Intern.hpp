/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-baux <xle-baux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 15:42:49 by xle-baux          #+#    #+#             */
/*   Updated: 2022/12/04 18:49:26 by xle-baux         ###   ########.fr       */
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
	const std::string *_formName;

public:
	Intern();
	Intern(Intern const & src);
	Intern & operator=(Intern const & src);
	virtual ~Intern();


	// const functions _functions;
	typedef int (*functions)(std::string target);
	Form* makeForm(std::string const & formName, std::string const & target);
	Form* createShrubberyCreationForm(std::string const target) const;
	Form* createRobotomyRequestForm(std::string const target) const;
	Form* createPresidentialPardonForm(std::string const target) const;

	class UnknowFormException : public std::exception
	{
		const char *what() const throw();
	};
};

#endif