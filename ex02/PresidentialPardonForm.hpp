/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l <tjorge-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 10:51:42 by tjorge-l          #+#    #+#             */
/*   Updated: 2025/09/29 10:57:53 by tjorge-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIAL_PARDON_FORM_HPP
# define PRESIDENTIAL_PARDON_FORM_HPP
#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	private:
		const std::string	_target;
	public:
		PresidentialPardonForm();															// Default Constructor
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm	&operator=(const PresidentialPardonForm &other);				// Assignment Operator
		PresidentialPardonForm(const PresidentialPardonForm &other);							// Copy Constructor
		~PresidentialPardonForm();															// Destructor
		void	doExecute() const;

};
#endif