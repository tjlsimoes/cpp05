/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l <tjorge-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 10:51:39 by tjorge-l          #+#    #+#             */
/*   Updated: 2025/09/29 10:54:27 by tjorge-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMY_REQUEST_FORM_HPP
# define ROBOTOMY_REQUEST_FORM_HPP
#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
	private:
		const std::string	_target;
		static	bool		success;
	public:
		RobotomyRequestForm();															// Default Constructor
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm	&operator=(const RobotomyRequestForm &other);				// Assignment Operator
		RobotomyRequestForm(const RobotomyRequestForm &other);							// Copy Constructor
		~RobotomyRequestForm();															// Destructor
		void	doExecute() const;

};
#endif