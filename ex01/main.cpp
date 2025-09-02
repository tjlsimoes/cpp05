#include "Form.hpp"
#include "Bureaucrat.hpp"
int	main(void)
{
	Form		*form = new Form;
	Form		*form_b = new Form("Non-standard", 3, 3);
	Bureaucrat	*bur = new Bureaucrat;
	Bureaucrat	*bur_b = new Bureaucrat("Joey", 3);


	std::cout << *bur;
	std::cout << *bur_b;
	std::cout << *form;
	std::cout << *form_b;

	std::cout << "------" << std::endl;
	form->beSigned(*bur);
	std::cout << *form;

	try
	{
		form->beSigned(*bur_b);
	}
	catch (const Form::GradeTooLowException& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "------" << std::endl;
	form_b->beSigned(*bur_b);
	std::cout << *form_b;

	std::cout << "------" << std::endl;
	form_b->setSigned(false);
	form_b->beSigned(*bur);
	std::cout << *form_b;

	std::cout << "------" << std::endl;
	try
	{
		bur_b->signForm(*form);
	}
	catch (const Form::GradeTooLowException& e)
	{
		std::cerr << e.what() << std::endl;
	}

	bur->signForm(*form);

	delete form;
	delete form_b;
	delete bur;
	delete bur_b;
	return (0);
}