#include "RobotomyRequestForm.hpp"

bool RobotomyRequestForm::success = true;

RobotomyRequestForm::RobotomyRequestForm(std::string target) : 
							AForm("Robotomy Request Form", 72, 45), _target(target)
{}

void	RobotomyRequestForm::doExecute() const
{
	std::cout << "drrrr drrrr drrrr drrr drrr" << std::endl;
	if (success == true)
	{
		std::cout << _target << " has been robotomized" << std::endl;
		success = false;
	}
	else
	{
		std::cout << "The robotomy has failed!" << std::endl;
		success = true;
	}
}
