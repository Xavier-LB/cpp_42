/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xle-baux <xle-baux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 14:32:13 by xle-baux          #+#    #+#             */
/*   Updated: 2022/12/09 12:25:04 by xle-baux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
private:
	const std::string m_target;
	
public:
// Contructors and Destructor --------------------------------------------------
	PresidentialPardonForm(void);
	PresidentialPardonForm(const std::string target);
	PresidentialPardonForm(PresidentialPardonForm const & src);
	PresidentialPardonForm & operator=(PresidentialPardonForm const & src);
	~PresidentialPardonForm();

// Secondary functions ---------------------------------------------------------
	void execute(Bureaucrat const & executor) const;


// Getters ---------------------------------------------------------------------
	const std::string & getTarget() const;
};

#endif