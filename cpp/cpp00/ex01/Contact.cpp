/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbeach <rbeach@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 13:36:45 by rbeach            #+#    #+#             */
/*   Updated: 2021/02/17 21:13:36 by rbeach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void) : _exist(false)
{
	return;
}

Contact::~Contact(void)
{
	return;
}

void Contact::setFirstName(std::string first_name) { this->_first_name = first_name; }
void Contact::setLastName(std::string last_name) { this->_last_name = last_name; }
void Contact::setNickname(std::string nickname) { this->_nickname = nickname; }
void Contact::setLogin(std::string login) { this->_login = login; }
void Contact::setPostal(std::string postal) { this->_postal = postal; }
void Contact::setEmail(std::string email) { this->_email = email; }
void Contact::setPhone(std::string phone) { this->_phone = phone; }
void Contact::setBirthday(std::string birthday) { this->_birthday = birthday; }
void Contact::setMeal(std::string meal) { this->_meal = meal; }
void Contact::setColor(std::string color) { this->_color = color; }
void Contact::setSecret(std::string secret) { this->_secret = secret; }
void Contact::setExist(bool exist) { this->_exist = true; }

std::string Contact::getFirstName(void) { return this->_first_name; }
std::string Contact::getLastName(void) { return this->_last_name; }
std::string Contact::getNickname(void) { return this->_nickname; }
std::string Contact::getLogin(void) { return this->_login; }
std::string Contact::getPostal(void) { return this->_postal; }
std::string Contact::getEmail(void) { return this->_email; }
std::string Contact::getPhone(void) { return this->_phone; }
std::string Contact::getBirthday(void) { return this->_birthday; }
std::string Contact::getMeal(void) { return this->_meal; }
std::string Contact::getColor(void) { return this->_color; }
std::string Contact::getSecret(void) { return this->_secret; }
bool Contact::getExist(void) { return this->_exist; }

void Contact::show_short(int i)
{
	std::cout.width(0);
	std::cout.fill(' ');
	std::cout << "|";
	std::cout.width(10);
	std::cout << i + 1;
	std::cout.width(0);
	std::cout << "|";
	std::cout.width(11);
	if (this->_first_name.length() < 10)
		std::cout << this->_first_name + "|";
	else
		std::cout << this->_first_name.substr(0, 9) + ".|";
	std::cout.width(11);
	if (this->_last_name.length() < 10)
		std::cout << this->_last_name + "|";
	else
		std::cout << this->_last_name.substr(0, 9) + ".|";
	std::cout.width(11);
	if (this->_nickname.length() < 10)
		std::cout << this->_nickname + "|";
	else
		std::cout << this->_nickname.substr(0, 9) + ".|";
	std::cout << std::endl;
}



