/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l <tjorge-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 10:51:35 by tjorge-l          #+#    #+#             */
/*   Updated: 2025/09/29 10:48:47 by tjorge-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERY_CREATION_FORM_HPP
# define SHRUBBERY_CREATION_FORM_HPP
#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm : public AForm
{
	private:
		const std::string	_target;
	public:
		ShrubberyCreationForm();															// Default Constructor
		ShrubberyCreationForm(std::string target);											// Parameterized Constructor
		ShrubberyCreationForm	&operator=(const ShrubberyCreationForm &other);				// Assignment Operator
		ShrubberyCreationForm(const ShrubberyCreationForm &other);							// Copy Constructor
		~ShrubberyCreationForm();															// Destructor

		void	doExecute() const;
};
#endif