/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l < tjorge-l@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 10:50:46 by tjorge-l          #+#    #+#             */
/*   Updated: 2025/09/08 10:50:47 by tjorge-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{}

Intern::~Intern()
{}

std::string	Intern::getFormName(std::string user_input) const
{
	bool				after_space;
	std::string			form_name;

	after_space = true;
	for (size_t i = 0; i < user_input.length(); i++)
	{
		if (after_space && !isspace(user_input[i]))
		{
			user_input[i] = std::toupper(static_cast<unsigned char>(user_input[i]));
			after_space = false;
			form_name += user_input[i];
		}
		else if (isspace(user_input[i]))
			after_space = true;
		else
		{
			user_input[i] = std::tolower(static_cast<unsigned char>(user_input[i]));
			form_name += user_input[i];
		}
	}
	form_name += "Form";
	return (form_name);
}


AForm	*Intern::makeForm(std::string form, std::string target) const
{
	std::string form_name = getFormName(form).c_str();
	if (form_name == "PresidentialPardonForm")
		return (new PresidentialPardonForm(target));
	else if (form_name == "RobotomyRequestForm")
		return (new RobotomyRequestForm(target));
	else if (form_name == "ShrubberyCreationForm")
		return (new ShrubberyCreationForm(target));
	else
	{
		std::cerr << "Unrecognized Form: " << form_name << std::endl; 
		return (NULL);
	}
}