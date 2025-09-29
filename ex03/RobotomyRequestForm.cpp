/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l <tjorge-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 10:51:40 by tjorge-l          #+#    #+#             */
/*   Updated: 2025/09/29 10:58:07 by tjorge-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

bool RobotomyRequestForm::success = true;

RobotomyRequestForm::RobotomyRequestForm(std::string target) : 
							AForm("Robotomy Request Form", 72, 45), _target(target)
{}

RobotomyRequestForm::RobotomyRequestForm() : 
							AForm(), _target("Default")
{}

RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
	if (this != &other)
		*this = other;
	return (*this);
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) :
				AForm(other), _target(other._target)
{}

RobotomyRequestForm::~RobotomyRequestForm()
{}

void	RobotomyRequestForm::doExecute() const
{
	std::cout << "drrrr drrrr drrrr drrr drrr" << std::endl;
	if (success == true)
	{
		std::cout << _target << " has been robotomized" << std::endl;
		success = false;
	}
	else
	{
		std::cout << "The robotomy has failed!" << std::endl;
		success = true;
	}
}
