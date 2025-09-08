/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l < tjorge-l@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 10:52:53 by tjorge-l          #+#    #+#             */
/*   Updated: 2025/09/08 10:52:53 by tjorge-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

// Default Constructor
Bureaucrat::Bureaucrat() : _name("Joe"), _grade(1)
{}

// Parameterized Constructor
Bureaucrat::Bureaucrat(const std::string n, int g) : _name(n)
{
	if (g < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (g > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		_grade = g;
}

// Copy Constructor
Bureaucrat::Bureaucrat(const Bureaucrat & other) : _name(other._name), _grade(other._grade)
{}

// Assignment Operator
Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &other)
{
	if (this != &other)
	{
		// _name = other._name;
		_grade = other._grade;
	}
	return (*this);
}

// Destructor
Bureaucrat::~Bureaucrat()
{}

std::string	Bureaucrat::getName() const
{
	return (_name);
}

int			Bureaucrat::getGrade() const
{
	return (_grade);
}

void		Bureaucrat::incrementGrade()
{
	if (_grade - 1 >= 1)
		_grade--;
	else
		throw Bureaucrat::GradeTooHighException();
}

void		Bureaucrat::decrementGrade()
{
	if (_grade + 1 <= 150)
		_grade++;
	else
		throw Bureaucrat::GradeTooLowException();
}


std::ostream	&operator<<(std::ostream & o, Bureaucrat const & rhs)
{
	o
	<< rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << "."
	<< std::endl;
	return (o);
}



