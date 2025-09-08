/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l < tjorge-l@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 10:52:28 by tjorge-l          #+#    #+#             */
/*   Updated: 2025/09/08 10:52:30 by tjorge-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <string>
#include <iostream>

class Form;

class	Bureaucrat
{
	private:
		std::string 		_name;
		int					_grade;
	
	public:
		Bureaucrat();										// Default Constructor
		Bureaucrat(const std::string n, int g);				// Parameterized Constructor
		Bureaucrat(const Bureaucrat & other);				// Copy Constructor
		Bureaucrat	&operator=(const Bureaucrat &other);	// Assignment Operator
		~Bureaucrat();										// Destructor

		class GradeTooHighException : public std::exception 
		{
			public:
				const char	*what() const throw()
				{
					return ("Invalid grade: too high");
				}
		};
		class GradeTooLowException : public std::exception 
		{
			public:
				const char	*what() const throw()
				{
					return ("Invalid grade: too low");
				}
		};

		std::string	getName() const;
		int			getGrade() const;
		void		incrementGrade();
		void		decrementGrade();
		void		signForm(Form &form) const;

};

std::ostream	&operator<<(std::ostream & o, const Bureaucrat & rhs);


#endif