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
		void		signForm(AForm &form) const;
		void		executeForm(const AForm &form) const;

};

std::ostream	&operator<<(std::ostream & o, const Bureaucrat & rhs);


#endif