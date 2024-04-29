/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez <alsaez@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 11:17:53 by alsaez            #+#    #+#             */
/*   Updated: 2023/10/16 16:27:07 by alsaez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOOK_CLASS_HPP
# define PHONEBOOOK_CLASS_HPP
#   include "Contact.class.hpp"
#   include <string>
#   include <stdlib.h>
#   include <iomanip>
#   include <iostream>

class PhoneBook {

	public:

		PhoneBook();
		void printContact(std::string) const;
		void addContact();
		void search();
		~PhoneBook();

	private:

		static const int	max_contact = 8;
		int					nbContact;
		Contact				contact[max_contact];
};

#endif
