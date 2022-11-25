/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-baux <xle-baux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 14:45:29 by xle-baux          #+#    #+#             */
/*   Updated: 2022/11/25 18:44:06 by xle-baux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

class Bureaucrat
{
private:
	std::string const	m_name;
	int					m_grade;

public:

// Contructors and Destructor --------------------------------------------------
	Bureaucrat(void);
	Bureaucrat(std::string name, int grade);
	Bureaucrat(Bureaucrat const & src);
	Bureaucrat & operator=(Bureaucrat const & src);
	virtual ~Bureaucrat();


// Getters ---------------------------------------------------------------------
	const std::string getName() const;
	int			getGrade() const;


// Secondary functions ---------------------------------------------------------
	void	incrementGrade();
	void	decrementGrade();

// Mandatory functions ---------------------------------------------------------
	class GradeTooHighException : public std::exception
	{

	public:
		const char *what() const throw()
		{
			return "Grade too high exception\n";
		}
	};

	class GradeTooLowException : public std::exception
	{

	public:
		const char *what() const throw()
		{
			return "Grade too low exception\n";
		}
	};
};

std::ostream &operator<<(std::ostream & out, Bureaucrat const & src);

#endif
