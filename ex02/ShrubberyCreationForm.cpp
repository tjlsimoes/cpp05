/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l <tjorge-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 10:51:37 by tjorge-l          #+#    #+#             */
/*   Updated: 2025/09/29 10:48:00 by tjorge-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"


ShrubberyCreationForm::ShrubberyCreationForm() : 
							AForm(), _target("home")
{}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : 
							AForm("Shrubbery Creation Form", 25, 5), _target(target)
{}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
	if (this != &other)
		*this = other;
	return (*this);
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) :
				AForm(other), _target(other._target)
{}

ShrubberyCreationForm::~ShrubberyCreationForm()
{}

void	ShrubberyCreationForm::doExecute() const
{
	std::ofstream	outputFile((_target + "_shrubbery").c_str());
	if (outputFile.is_open())
	{
		outputFile << "    _,--._.-,\n";
		outputFile << "   /\\_/\\r-,\\_ )\n";
		outputFile << ".-.) _;='_/ (.;\n";
		outputFile << " \\ \\'     \\/S )\n";
		outputFile << "  L.'-. _.'|-'\n";
		outputFile << " <_`-\\'\\'_.'/\n";
		outputFile << "   `'-._( \\\n";
		outputFile << "    ___   \\\\,      ___\n";
		outputFile << "    \\ .'-._ \\   .-'_./\n";
		outputFile << "     '._' '.\\/.-'_.'\n";
		outputFile << "        '--``\\('--'\n";
		outputFile << "        snd   \\\n";
		outputFile << "              `\\,\n";
		outputFile << "                \\|\n" 
		<< std::endl;
		outputFile << "    _,--._.-,\n";
		outputFile << "   /\\_/\\r-,\\_ )\n";
		outputFile << ".-.) _;='_/ (.;\n";
		outputFile << " \\ \\'     \\/S )\n";
		outputFile << "  L.'-. _.'|-'\n";
		outputFile << " <_`-\\'\\'_.'/\n";
		outputFile << "   `'-._( \\\n";
		outputFile << "    ___   \\\\,      ___\n";
		outputFile << "    \\ .'-._ \\   .-'_./\n";
		outputFile << "     '._' '.\\/.-'_.'\n";
		outputFile << "        '--``\\('--'\n";
		outputFile << "        snd   \\\n";
		outputFile << "              `\\,\n";
		outputFile << "                \\|\n"
		<< std::endl;
		outputFile.close();
	}

}