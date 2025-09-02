#ifndef FORM_HPP
# define FORM_HPP
#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

class Form
{
	private:
		const std::string	_name;
		bool				_signed;
		const int			_gr_to_sign;
		const int			_gr_to_exec;

	public:
		Form();														// Default Constructor
		Form(const std::string n, const int sign, const int exec);	// Parameterized Constructor
		Form(const Form &other);									// Copy Constructor
		Form	&operator=(const Form &other);						// Assignment Operator
		~Form();													// Destructor

		std::string	getName() const;
		bool		getSigned() const;
		int			getGrSign() const;
		int			getGrExec() const;
		
		void		setSigned(bool newSigned);
		void		beSigned(const Bureaucrat &b);

		class	GradeTooLowException : public std::exception
		{
			public:
				const char	*what() const throw()
				{
					return ("Invalid grade to sign: too low");
				}
		};
};

std::ostream	&operator<<(std::ostream & o, const Form & rhs);
#endif