/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l <tjorge-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 10:51:49 by tjorge-l          #+#    #+#             */
/*   Updated: 2025/09/29 11:02:03 by tjorge-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
int	main(void)
{
	PresidentialPardonForm		*pres_form = new PresidentialPardonForm("Michael");
	RobotomyRequestForm			*rob_form = new RobotomyRequestForm("John");
	ShrubberyCreationForm		*shr_form = new ShrubberyCreationForm("Cleveland");
	Bureaucrat	*bur = new Bureaucrat;
	Bureaucrat	*bur_b = new Bureaucrat("Joey", 150);


	std::cout << *bur;
	std::cout << *bur_b;
	std::cout << *pres_form;
	std::cout << *rob_form;
	std::cout << *shr_form;

	// Testing Orthodox canonical form
	// RobotomyRequestForm		*a_new_pres_form = new RobotomyRequestForm();
	// RobotomyRequestForm		*new_pres_form = new RobotomyRequestForm(*rob_form);
	// delete pres_form;
	// std::cout << *a_new_pres_form;
	// std::cout << *new_pres_form;
	// delete a_new_pres_form;
	// delete new_pres_form;

	// Trying to execute unsigned form
	try
	{
		bur->executeForm(*pres_form);
	}
	catch(const AForm::NotSignedException& e)
	{
		std::cerr << e.what() << '\n';
	}

	// Trying to execute form with lower grade
	try
	{
		pres_form->setSigned(true);
		bur_b->executeForm(*pres_form);
	}
	catch(const AForm::GradeTooLowException& e)
	{
		std::cerr << e.what() << '\n';
	}

	Bureaucrat	*bur_c = new Bureaucrat("D", 145);
	Bureaucrat	*bur_d = new Bureaucrat("E", 150);
	Bureaucrat	*bur_e = new Bureaucrat("F", 150);

	// Grade to sign, but not to execute
	pres_form->setSigned(false);
	bur_c->signForm(*pres_form);
	try
	{
		bur_c->executeForm(*pres_form);
	}
	catch(const AForm::GradeTooLowException& e)
	{
		std::cerr << e.what() << '\n';
	}

	// Grade to sign and execute
	bur->signForm(*pres_form);
	bur->executeForm(*pres_form);

	delete pres_form;
	delete rob_form;
	delete shr_form;
	delete bur;
	delete bur_b;
	delete bur_c;
	delete bur_d;
	delete bur_e;
	return (0);
}