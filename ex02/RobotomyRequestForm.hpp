#ifndef ROBOTOMY_REQUEST_FORM_HPP
# define ROBOTOMY_REQUEST_FORM_HPP
#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
	private:
		const std::string	_target;
		static	bool		success;
	public:
		RobotomyRequestForm(std::string target);
		void	doExecute() const;

};
#endif