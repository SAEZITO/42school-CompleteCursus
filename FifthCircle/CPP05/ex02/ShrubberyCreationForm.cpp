/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez <alsaez@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 14:09:02 by alsaez            #+#    #+#             */
/*   Updated: 2023/11/07 13:07:06 by alsaez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

std::string	ShrubberyCreationForm::getTarget( void ) const
{
	return (this->_target);
}

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("Default Shrubbery AForm", 145, 137)
{
	this->_target = "Default";
	std::cout << "A default Shrubbery AForm named " << *this << " has been printed" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << *this << " has been deleted, it's the Form : " << _target << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & ref) : AForm(ref.getName(), ref.getGradeToSign(), ref.getGradeToExecute())
{
	this->_target = ref.getTarget();
	std::cout << "ShrubberyCreationAForm" << *this << " has been copied" << std::endl;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & ref)
{
	this->_target = ref.getTarget();
	std::cout << "ShrubberyCreationAForm" << *this << " has been copied by assignation" << std::endl;
	return (*this);
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("Shrubbery AForm", 145,137)
{
	this->_target = target;
	std::cout << "Shrubbery AForm with name : " << _target << " has been printed" << std::endl;
}

void ShrubberyCreationForm::execute (const Bureaucrat &executor) const
{
	std::string filename = this->getTarget();
	std::string tree =
	"     .     .  .      +     .      .          .  \n"
	".       .      .     #       .           .      \n"
	"   .      .         ###            .      .  .  \n"
	" .      .   \"#:. .:##\"##:. .:#\"  .      .    .  \n"
	"     .      . \"####\"###\"####\"  .     .  \n"
	"   .     \"#:.    .:#\"###\"#:.    .:#\"  .        . \n"
	".  .        \"#########\"#########\"        .        . \n"
	"    .    \"#:.  \"####\"###\"####\"  .:#\"   .       . \n"
	" .     .  \"#######\"\"##\"##\"\"#######\"                  .\n"
	"        .    \"##\"#####\"#####\"##\"           .      .    \n"
	".   \"#:. ...  .:##\"###\"###\"##:.  ... .:#\"     .  \n"
	"  .     \"#######\"##\"#####\"##\"#######\"      .     . \n"
	".    .     \"#####\"\"#######\"\"#####\"    .      . \n"
	"        .     \"      000      \"    .     .    \n"
	"   .         .   .   000     .        .       . \n"
	"..... ..............O000O.............. ......\n";

	if (this->getSigned() == false)
		throw (AForm::FormNotSignedException());
	else if (executor.getGrade() > this->getGradeToExecute())
		throw (AForm::GradeTooLowException());
	else
	{
		filename.append("_shrubbery");
		std::ofstream	ofs(filename.c_str());
		if (!ofs.is_open())
		{
			std::cout << "Coulnd't open the output file" << std::endl;
			return ;
		}
		ofs << tree;
		ofs.close();
	}
}
