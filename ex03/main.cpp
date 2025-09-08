/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l < tjorge-l@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 10:33:18 by tjorge-l          #+#    #+#             */
/*   Updated: 2025/09/08 10:50:53 by tjorge-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Intern.hpp"

int	main(void)
{
	Intern	someRandomIntern;

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