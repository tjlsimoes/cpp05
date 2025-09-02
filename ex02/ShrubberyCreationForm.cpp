#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : 
							AForm("Shrubbery Creation Form", 25, 5), _target(target)
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