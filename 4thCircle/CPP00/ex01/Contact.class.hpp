/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez <alsaez@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 11:19:05 by alsaez            #+#    #+#             */
/*   Updated: 2023/10/16 15:01:08 by alsaez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP
# include <iostream>

class Contact {

	public :

		Contact();
		~Contact();
		std::string getFirstname() const;
		std::string getLastname() const;
		std::string getNickname() const;
		std::string getPhone() const;
		std::string getSecret() const;
		void setFirstname(std::string firstname);
		void setLastname(std::string lastname);
		void setNickname(std::string nickname);
		void setPhone(std::string phone);
		void setSecret(std::string secret);

	private :

		std::string firstname;
		std::string lastname;
		std::string nickname;
		std::string phone;
		std::string secret;

};

#endif
