/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-baux <xle-baux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 22:01:37 by xlb               #+#    #+#             */
/*   Updated: 2022/12/09 12:12:43 by xle-baux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include "Bureaucrat.hpp"
# include <iomanip>
# include <stdexcept>
# include <string>

class Bureaucrat;

class AForm
{
private:
	std::string const	m_name;
	bool				m_signed;
	int 				m_singAuth;
	int					m_excAuth;

public:
// Contructors and Destructor --------------------------------------------------
	AForm();
	AForm(std::string const &name, int singAuth, int excAuth) ;
	AForm(AForm const & src);
	AForm & operator=(AForm const & src);
	virtual ~AForm();

// Getters ---------------------------------------------------------------------
	virtual const std::string getName() const;
	bool getSigned() const;
	int getSingAuth() const;
	int getExcAuth() const;


// Mandatory function ----------------------------------------------------------
	void beSigned(const Bureaucrat & bureaucrat);
	virtual void execute(Bureaucrat const & executor) const = 0;;

// Exceptions -------------------------------------------------------------------
	class GradeTooHighException : public std::exception
	{
		const char *what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
		const char *what() const throw();
	};

	class ExecuteUnsignedException : public std::exception
	{
		const char *what() const throw();
	};
};

// Overload --------------------------------------------------------------------
std::ostream &operator<<(std::ostream & out, AForm const & src);

#endif