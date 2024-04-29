/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez <alsaez@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 14:10:26 by alsaez            #+#    #+#             */
/*   Updated: 2023/11/03 14:36:47 by alsaez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() :AForm("PresidentialPardonForm", 25, 5)
{
	this->_target = "default";
	std::cout << "Default PresidentialPardonForm created" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << *this << "PresidentialPardonForm destroyed" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string target) : AForm("PresidentialPardonForm", 25, 5)
{
	this->_target = target;
	std::cout << "PresidentialPardonForm created with target: " << this->_target << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &f) : AForm(f)
{
	*this = f;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &f)
{
	if (this != &f)
		this->_target = f._target;
	return *this;
}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const
{
	if (this->getSigned() == false)
		throw AForm::FormNotSignedException();
	else if (executor.getGrade() > this->getGradeToExecute())
		throw AForm::GradeTooLowException();
	else
		std::cout << this->_target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}
