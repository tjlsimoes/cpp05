#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : 
							AForm("Presidential Pardon Form", 145, 137), _target(target)
{}

void	PresidentialPardonForm::doExecute() const
{
	std::cout
	<< _target << " has been pardoned by Zaphod Beeblebrox."
	<< std::endl;
}
