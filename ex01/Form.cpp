/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l <tjorge-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 10:52:24 by tjorge-l          #+#    #+#             */
/*   Updated: 2025/09/29 10:26:55 by tjorge-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"


Form::Form() : _name("Standard"), _signed(false), _gr_to_sign(1), _gr_to_exec(1)
{}

Form::Form(const std::string n, const int sign, const int exec) try :
					_name(n), _signed(false), _gr_to_sign(sign), _gr_to_exec(exec)
{
	if (_gr_to_sign < 1 || _gr_to_exec < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (_gr_to_sign > 150 || _gr_to_exec > 150)
		throw Bureaucrat::GradeTooLowException();
}
catch (...)
{
	throw;
}

Form::Form(const Form &other) :
				_name(other._name), _signed(false), 
				_gr_to_sign(other._gr_to_sign), _gr_to_exec(other._gr_to_exec)
{}


Form	&Form::operator=(const Form &other)
{
	if (this != &other)
		_signed = other._signed;
	return (*this);
}

Form::~Form()
{}


std::string	Form::getName() const
{
	return (_name);
}

bool		Form::getSigned() const
{
	return (_signed);
}

int			Form::getGrSign() const
{
	return (_gr_to_sign);
}

int			Form::getGrExec() const
{
	return (_gr_to_exec);
}


void		Form::setSigned(bool newSigned)
{
	_signed = newSigned;
}

void		Form::beSigned(const Bureaucrat &b)
{
	if (b.getGrade() <= _gr_to_sign)
		_signed = true;
	else
		throw Form::GradeTooLowException();
}

std::ostream	&operator<<(std::ostream & o, const Form & rhs)
{
	o
	<< "Form " << rhs.getName() 
	<< ", grade to sign " << rhs.getGrSign()
	<< ", grade to execute " << rhs.getGrExec()
	<< ", signed: " << (rhs.getSigned() ? "true" : "false")
	<< std::endl;
	return (o);
}

