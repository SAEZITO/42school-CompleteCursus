/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contac.object.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez <alsaez@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 16:16:30 by alsaez            #+#    #+#             */
/*   Updated: 2023/10/16 14:19:28 by alsaez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

Contact::Contact(){}

Contact::~Contact(){}

//getter
std::string Contact::getFirstname() const
{
    return(firstname);
}
std::string Contact::getLastname() const
{
     return(lastname);
}
std::string Contact::getNickname() const
{
     return(nickname);
}
std::string Contact::getPhone() const
{
     return(phone);
}
std::string Contact::getSecret() const
{
     return(secret);
}

//setter
void Contact::setFirstname(std::string first)
{
    firstname = first;
}
void Contact::setLastname(std::string last)
{
    lastname = last;
}
void Contact::setNickname(std::string nick)
{
    nickname = nick;
}
void Contact::setPhone(std::string phonen)
{
    phone = phonen;
}
void Contact::setSecret(std::string secretd)
{
    secret = secretd;
}
