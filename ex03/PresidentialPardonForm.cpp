/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l < tjorge-l@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 10:50:59 by tjorge-l          #+#    #+#             */
/*   Updated: 2025/09/08 10:50:59 by tjorge-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : 
							AForm("Presidential Pardon Form", 145, 137), _target(target)
{}

void	PresidentialPardonForm::doExecute() const
{
	std::cout
	<< _target << " has been pardoned by Zaphod Beeblebrox."
	<< std::endl;
}
