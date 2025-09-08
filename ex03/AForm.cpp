/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l < tjorge-l@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 10:50:35 by tjorge-l          #+#    #+#             */
/*   Updated: 2025/09/08 10:50:36 by tjorge-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : _name("Standard"), _signed(false), _gr_to_sign(1), _gr_to_exec(1)
{}

AForm::AForm(const std::string n, const int sign, const int exec) try :
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

AForm::AForm(const AForm &other) :
				_name(other._name), _signed(false), 
				_gr_to_sign(other._gr_to_sign), _gr_to_exec(other._gr_to_exec)
{}


AForm	&AForm::operator=(const AForm &other)
{
	if (this != &other)
		_signed = other._signed;
		// No more changes, really?
	return (*this);
}

AForm::~AForm()
{}

std::string	AForm::getName() const
{
	return (_name);
}

bool		AForm::getSigned() const
{
	return (_signed);
}

int			AForm::getGrSign() const
{
	return (_gr_to_sign);
}

int			AForm::getGrExec() const
{
	return (_gr_to_exec);
}

void		AForm::setSigned(bool newSigned)
{
	_signed = newSigned;
}

void		AForm::beSigned(const Bureaucrat &b)
{
	if (b.getGrade() <= _gr_to_sign)
		_signed = true;
	else
		throw AForm::GradeTooLowException();
}

void	AForm::execute(const Bureaucrat & executor) const
{
	if (!getSigned())
		throw AForm::NotSignedException();
	else if (executor.getGrade() > getGrExec())
		throw AForm::GradeTooLowException();
	(void) executor;
	doExecute();
}
std::ostream	&operator<<(std::ostream & o, const AForm & rhs)
{
	o
	<< "Form " << rhs.getName() 
	<< ", grade to sign " << rhs.getGrSign()
	<< ", grade to execute " << rhs.getGrExec()
	<< ", signed: " << (rhs.getSigned() ? "true" : "false")
	<< std::endl;
	return (o);
}

