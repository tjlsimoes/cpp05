/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l <tjorge-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 10:51:45 by tjorge-l          #+#    #+#             */
/*   Updated: 2025/09/29 10:58:24 by tjorge-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : 
							AForm("Presidential Pardon Form", 145, 137), _target(target)
{}

PresidentialPardonForm::PresidentialPardonForm() : 
							AForm(), _target("Default")
{}

PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
	if (this != &other)
		*this = other;
	return (*this);
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other) :
				AForm(other), _target(other._target)
{}

PresidentialPardonForm::~PresidentialPardonForm()
{}

void	PresidentialPardonForm::doExecute() const
{
	std::cout
	<< _target << " has been pardoned by Zaphod Beeblebrox."
	<< std::endl;
}
