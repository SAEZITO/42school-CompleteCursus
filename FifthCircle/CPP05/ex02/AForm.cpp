/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez <alsaez@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 14:37:18 by alsaez            #+#    #+#             */
/*   Updated: 2023/11/07 12:53:38 by alsaez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : _name("Default"), _signed(false), _gradeToSign(150), _gradeToExecute(150)
{
	std::cout << "AForm " << _name << " was created." << std::endl;
}

AForm::AForm(const std::string name, int gradeToSign, int gradeToExecute) : _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw AForm::GradeTooHighException();
	else if (gradeToSign > 150 || gradeToExecute > 150)
		throw AForm::GradeTooLowException();
	std::cout << "AForm: " << _name << " created with grade to sign: " << _gradeToSign
		<< " and grade to execute: " << _gradeToExecute << std::endl;
}

AForm::AForm(const AForm &f) : _name(f._name), _gradeToSign(f._gradeToSign), _gradeToExecute(f._gradeToExecute)
{
	std::cout << "Form Copy Constructor" << std::endl;
	std::cout << "A new copy of Form " << f.getName() << ", with grade "
		<< f.getGradeToSign() << ", was made" << std::endl;
	*this = f;
}

AForm &AForm::operator=(const AForm &f)
{
	(void)f;
	std::cout << "Impossible to change already existing form." << std::endl;
	std::cout << "Please create a new form using a constructor" << std::endl;
	return *this;
}

AForm::~AForm()
{
	std::cout << "AForm " << this->_name << " destroyed" << std::endl;
}

const std::string AForm::getName() const
{
	return this->_name;
}

bool AForm::getSigned() const
{
	return this->_signed;
}

int AForm::getGradeToSign() const
{
	return this->_gradeToSign;
}

int AForm::getGradeToExecute() const
{
	return this->_gradeToExecute;
}

void AForm::beSigned(const Bureaucrat &b)
{
	if (b.getGrade() > this->_gradeToSign)
		throw AForm::GradeTooLowException();
	else
		this->_signed = true;
}

void AForm::execute(const Bureaucrat &executor) const
{
	if (!this->getSigned())
		throw AForm::FormNotSignedException();
	else if (executor.getGrade() > this->_gradeToExecute)
		throw AForm::GradeTooLowException();
}

const char *AForm::GradeTooHighException::what() const throw()
{
	return "Grade too high";
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return "Grade too low";
}

const char *AForm::FormNotSignedException::what() const throw()
{
	return "AForm: not be signed";
}

std::ostream &operator<<(std::ostream &os, const AForm &f)
{
	os << "AForm: " << f.getName() << " is " << (f.getSigned() ? "signed" : "not signed")
		<< " and has grade to sign: " << f.getGradeToSign() << " and grade to execute: "
			<< f.getGradeToExecute() << std::endl;
	return os;
}
