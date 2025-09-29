/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l <tjorge-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 10:50:50 by tjorge-l          #+#    #+#             */
/*   Updated: 2025/09/29 11:08:57 by tjorge-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
	private:
		std::string	getFormName(std::string user_input) const;

	public:
		Intern();												// Default Constructor
		Intern	&operator=(const Intern &other);				// Assignment Operator
		Intern(const Intern &other);							// Copy Constructor
		~Intern();												// Destructor

		AForm	*makeForm(std::string form, std::string target) const;
};

#endif