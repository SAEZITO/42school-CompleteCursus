/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotmyRequestForm.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez <alsaez@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 14:09:57 by alsaez            #+#    #+#             */
/*   Updated: 2023/11/07 13:28:57 by alsaez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotmyRequestForm.hpp"

RobotmyRequestForm::RobotmyRequestForm():AForm("RobotmyRequestForm", 72, 45)
{
    this->_target = "none";
}

RobotmyRequestForm::RobotmyRequestForm(std::string target):AForm("RobotmyRequestForm", 72, 45)
{
    this->_target = target;
}

RobotmyRequestForm::RobotmyRequestForm(RobotmyRequestForm const & src):AForm("RobotmyRequestForm", 72, 45)
{
    this->_target = src._target;
}

RobotmyRequestForm::~RobotmyRequestForm() {}

RobotmyRequestForm & RobotmyRequestForm::operator=(RobotmyRequestForm const & obj)
{
    this->_target = obj._target;
    return *this;
}

const char* RobotmyRequestForm::FailureException::what() const throw()
{
	return ("Robotomy failure");
}

void RobotmyRequestForm::execute(Bureaucrat const &executor) const
{
	if (this->getSigned() == false)
		throw (AForm::FormNotSignedException());
	else if (executor.getGrade() > this->getGradeToExecute())
		throw (AForm::GradeTooLowException());
	int success = std::rand() % 2;
		std::cout << "... intensive drilling noises ...\n";
	if (success == 1)
	{
		std::cout << this->_target << " has been robotomized" << std::endl;
	}
	else
		throw (RobotmyRequestForm::FailureException());
}
