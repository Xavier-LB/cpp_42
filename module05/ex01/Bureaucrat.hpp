/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xlb <xlb@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 14:45:29 by xle-baux          #+#    #+#             */
/*   Updated: 2022/11/27 02:13:17 by xlb              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <stdexcept>
# include "Form.hpp"

class Form;

class Bureaucrat
{
private:
	const std::string	m_name;
	int					m_grade;

public:

// Contructors and Destructor --------------------------------------------------
	Bureaucrat(void);
	Bureaucrat(const std::string &name, int grade);
	Bureaucrat(Bureaucrat const & src);
	Bureaucrat & operator=(Bureaucrat const & src);
	virtual ~Bureaucrat();


// Getters ---------------------------------------------------------------------
	const std::string getName() const;
	int			getGrade() const;


// Secondary functions ---------------------------------------------------------
	void	incrementGrade();
	void	decrementGrade();

// Mandatory function ----------------------------------------------------------
	void signForm(Form & form) const;

// Exceptions ------------------------------------------------------------------
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
std::ostream &operator<<(std::ostream & out, Bureaucrat const & src);

#endif
