/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l <tjorge-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 10:51:52 by tjorge-l          #+#    #+#             */
/*   Updated: 2025/09/29 12:48:11 by tjorge-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <string>
#include <iostream>

class AForm;

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
				const char	*what() const throw();
		};
		class GradeTooLowException : public std::exception 
		{
			public:
				const char	*what() const throw();
		};

		std::string	getName() const;
		int			getGrade() const;
		void		incrementGrade();
		void		decrementGrade();
		void		signForm(AForm &form) const;
		void		executeForm(const AForm &form) const;

};

std::ostream	&operator<<(std::ostream & o, const Bureaucrat & rhs);


#endif