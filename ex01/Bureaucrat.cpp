/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l < tjorge-l@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 10:52:32 by tjorge-l          #+#    #+#             */
/*   Updated: 2025/09/08 10:52:34 by tjorge-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
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
		_name = other._name;
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

void		Bureaucrat::signForm(Form &form) const
{
	try
	{
		form.beSigned(*this);
	}
	 catch(const Form::GradeTooLowException& e)
	{
		std::cerr
		<< _name << " couldn't sign form " << form.getName()
		<< " because forms' grade to sign was " << form.getGrSign()
		<< " and bureaucrat's grade was " << _grade
		<< std::endl;
		return ;
	}
	std::cout 
	<< _name << " signed " << form.getName()
	<< std::endl;
}


std::ostream	&operator<<(std::ostream & o, Bureaucrat const & rhs)
{
	o
	<< rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << "."
	<< std::endl;
	return (o);
}



