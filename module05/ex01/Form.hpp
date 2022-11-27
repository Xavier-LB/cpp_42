/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xlb <xlb@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 22:01:37 by xlb               #+#    #+#             */
/*   Updated: 2022/11/27 02:16:21 by xlb              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"
# include <iomanip>
# include <stdexcept>
# include <string>

class Bureaucrat;

class Form
{
private:
	std::string const	m_name;
	bool				m_signed;
	int					m_singAuth;
	int					m_excAuth;

public:
// Contructors and Destructor --------------------------------------------------
	Form();
	Form(std::string const &name, int singAuth, int excAuth) ;
	Form(Form const & src);
	Form & operator=(Form const & src);
	virtual ~Form();

// Getters ---------------------------------------------------------------------
	const std::string getName() const;
	bool getSigned() const;
	int getSingAuth() const;
	int getExcAuth() const;


// Mandatory function ----------------------------------------------------------
	void beSigned(const Bureaucrat & bureaucrat);

// Exceptions -------------------------------------------------------------------
	class GradeTooHighException : public std::exception
	{
		const char *what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
		const char *what() const throw();
	};
};

// Overload --------------------------------------------------------------------
std::ostream &operator<<(std::ostream & out, Form const & src);

#endif