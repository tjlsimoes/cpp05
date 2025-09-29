/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l <tjorge-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 10:33:18 by tjorge-l          #+#    #+#             */
/*   Updated: 2025/09/29 11:15:53 by tjorge-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Intern.hpp"

int	main(void)
{
	Intern	someRandomIntern;
	Intern	*AIntern = new Intern();
	Intern	*BIntern = new Intern(*AIntern);
	Intern	*CIntern = NULL;

	*CIntern = *AIntern;
	(void)AIntern;
	(void)BIntern;
	(void)CIntern;
	delete AIntern;
	delete BIntern;
	delete CIntern;

	AForm	*form;

	form = someRandomIntern.makeForm("robotomy request", "Bender");
	std::cout << *form;

	delete form;

	form = someRandomIntern.makeForm("presidential Pardon", "Yellow");
	std::cout << *form;

	delete form;

	
	form = someRandomIntern.makeForm("Shrubbery Creation", "Yellow");
	std::cout << *form;

	delete form;


	form = someRandomIntern.makeForm("   Shrubbery                Creation                  ", "Yellow");
	std::cout << *form;
	delete form;


	return (0);
}