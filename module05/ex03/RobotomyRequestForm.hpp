/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-baux <xle-baux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 14:31:26 by xle-baux          #+#    #+#             */
/*   Updated: 2022/12/09 12:24:58 by xle-baux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
#include <ctime>

class RobotomyRequestForm : public AForm
{
private:
	const std::string m_target;
	
public:
// Contructors and Destructor --------------------------------------------------
	RobotomyRequestForm(void);
	RobotomyRequestForm(const std::string target);
	RobotomyRequestForm(RobotomyRequestForm const & src);
	RobotomyRequestForm & operator=(RobotomyRequestForm const & src);
	~RobotomyRequestForm();

// Secondary functions ---------------------------------------------------------
	void execute(Bureaucrat const & executor) const;


// Getters ---------------------------------------------------------------------
	const std::string & getTarget() const;
};

#endif