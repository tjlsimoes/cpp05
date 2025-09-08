/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l < tjorge-l@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 10:52:46 by tjorge-l          #+#    #+#             */
/*   Updated: 2025/09/08 10:52:46 by tjorge-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	Bureaucrat def;
	std::cout << def;

	Bureaucrat a("Neo", 1);
	Bureaucrat b("Smith", 150);
	std::cout << a << b;

	std::cout << "-------- Object construction exceptions --------" << std::endl;
	// Exceptions upon object construction
	try
	{
		Bureaucrat c("Zed", 0);
	}
	catch(const Bureaucrat::GradeTooHighException& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Bureaucrat d("Mr. Williams", 151);
	}
	catch(const Bureaucrat::GradeTooLowException& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "-------- Increment and decrement tests --------" << std::endl;
	// Increment and decrement tests
	def.decrementGrade();
	a.decrementGrade();
	b.incrementGrade();
	std::cout << def << a << b;
	try
	{
		def.incrementGrade();
		def.incrementGrade();
	}
	catch(const Bureaucrat::GradeTooHighException& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		b.decrementGrade();
		b.decrementGrade();
	}
	catch(const Bureaucrat::GradeTooLowException& e)
	{
		std::cerr << e.what() << '\n';
	}

	Bureaucrat *e = new Bureaucrat("James", 2);
	e->incrementGrade();
		try
	{
			e->incrementGrade();
	}
	catch(const Bureaucrat::GradeTooHighException& e)
	{
		std::cerr << e.what() << '\n';
	}
	delete e;
	
}