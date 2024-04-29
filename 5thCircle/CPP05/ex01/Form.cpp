/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez <alsaez@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 14:37:18 by alsaez            #+#    #+#             */
/*   Updated: 2023/11/02 15:38:41 by alsaez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("Default"), _signed(false), _gradeToSign(1), _gradeToExecute(1)
{
	std::cout << "Form created" << std::endl;
}

Form::Form(const std::string name, int gradeToSign, int gradeToExecute) : _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
	if (gradeToSign < 1)
		throw Form::GradeTooHighException();
	else if (gradeToSign > 150)
		throw Form::GradeTooLowException();
	else if (gradeToExecute < 1)
		throw Form::GradeTooHighException();
	else if (gradeToExecute > 150)
		throw Form::GradeTooLowException();
	std::cout << "Form: " << _name << " created with grade to sign: " << _gradeToSign << " and grade to execute: " << _gradeToExecute << std::endl;
}

Form::Form(const Form &f) : _name(f._name), _gradeToSign(f._gradeToSign), _gradeToExecute(f._gradeToExecute)
{
	*this = f;
}

Form &Form::operator=(const Form &f)
{
	if (this != &f)
		this->_signed = f._signed;
	return *this;
}

Form::~Form()
{
	std::cout << "Form " << this->_name << " destroyed" << std::endl;
}

const std::string Form::getName() const
{
	return this->_name;
}

bool Form::getSigned() const
{
	return this->_signed;
}

int Form::getGradeToSign() const
{
	return this->_gradeToSign;
}

int Form::getGradeToExecute() const
{
	return this->_gradeToExecute;
}

void Form::beSigned(const Bureaucrat &b)
{
	if (b.getGrade() > this->_gradeToSign)
		throw Form::GradeTooLowException();
	else
		this->_signed = true;
}

const char *Form::GradeTooHighException::what() const throw()
{
	return "Grade too high";
}

const char *Form::GradeTooLowException::what() const throw()
{
	return "Grade too low";
}

std::ostream &operator<<(std::ostream &os, const Form &f)
{
	os << "Form: " << f.getName() << " is " << (f.getSigned() ? "signed" : "not signed")
		<< " and has grade to sign: " << f.getGradeToSign() << " and grade to execute: "
			<< f.getGradeToExecute() << std::endl;
	return os;
}
