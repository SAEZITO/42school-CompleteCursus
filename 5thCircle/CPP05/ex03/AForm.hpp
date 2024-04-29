/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez <alsaez@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 14:37:14 by alsaez            #+#    #+#             */
/*   Updated: 2023/11/07 13:06:35 by alsaez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AForm_HPP
# define AForm_HPP

# include <string>
# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private:
		const std::string _name;
		bool _signed;
		const int _gradeToSign;
		const int _gradeToExecute;

	protected:

	public:
		AForm();
		AForm(const std::string name, int gradeToSign, int gradeToExecute);
		AForm(const AForm &f);
		virtual ~AForm();
		AForm &operator=(const AForm &f);

		const std::string getName() const;
		bool getSigned() const;
		int getGradeToSign() const;
		int getGradeToExecute() const;
		void beSigned(const Bureaucrat &b);
		virtual void execute(const Bureaucrat &executor) const = 0;
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
		class FormNotSignedException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
};

std::ostream &operator<<(std::ostream &os, const AForm &f);

#endif
