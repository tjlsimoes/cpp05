/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l < tjorge-l@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 10:52:07 by tjorge-l          #+#    #+#             */
/*   Updated: 2025/09/08 10:52:07 by tjorge-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

class AForm
{
	private:
		const std::string			_name;
		bool						_signed;
		const int					_gr_to_sign;
		const int					_gr_to_exec;

	public:
		AForm() ;														// Default Constructor
		AForm(const std::string n, const int sign, const int exec);		// Parameterized Constructor
		AForm(const AForm &other);										// Copy Constructor
		AForm	&operator=(const AForm &other);							// Assignment Operator
		virtual ~AForm();												// Destructor

		std::string				getName() const;
		bool					getSigned() const;
		int						getGrSign() const;
		int						getGrExec() const;
		
		void					setSigned(bool newSigned);
		void					beSigned(const Bureaucrat &b);
		void					execute(const Bureaucrat & executor) const;
		virtual void			doExecute() const = 0;

		class	GradeTooLowException : public std::exception
		{
			public:
				const char	*what() const throw()
				{
					return ("Invalid grade: too low");
				}
		};

		class	NotSignedException : public std::exception
		{
			public:
				const char	*what() const throw()
				{
					return ("Form not signed");
				}
		};
};

std::ostream	&operator<<(std::ostream & o, const AForm & rhs);
#endif