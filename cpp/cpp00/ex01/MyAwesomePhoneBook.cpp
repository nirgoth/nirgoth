/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MyAwesomePhoneBook.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbeach <rbeach@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 18:06:15 by rbeach            #+#    #+#             */
/*   Updated: 2021/02/17 21:37:18 by rbeach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void ft_full_info (Contact Contact)
{
		std::cout << "First name: " << Contact.getFirstName() << std::endl;
		std::cout << "Last name: " << Contact.getLastName() << std::endl;
		std::cout << "Nickname: " << Contact.getNickname() << std::endl;
		std::cout << "Login: " << Contact.getLogin() << std::endl;
		std::cout << "Postal adress: " << Contact.getPostal() << std::endl;
		std::cout << "Email adress: " << Contact.getEmail() << std::endl;
		std::cout << "Phone number: " << Contact.getPhone() << std::endl;
		std::cout << "Birthday: " << Contact.getBirthday() << std::endl;
		std::cout << "Favorite meal: " << Contact.getMeal() << std::endl;
		std::cout << "Underwear color: " << Contact.getColor() << std::endl;
		std::cout << "Darkest secret: " << Contact.getSecret() << std::endl;
}

void ft_short_info(Contact Contact, int i)
{
	std::cout.width(0);
	std::cout.fill(' ');
	std::cout << "|";
	std::cout.width(10);
	std::cout << i + 1;
	std::cout.width(0);
	std::cout << "|";
	std::cout.width(11);
	if (Contact.getFirstName().length() < 10)
		std::cout << Contact.getFirstName() + "|";
	else
		std::cout << Contact.getFirstName().substr(0, 9) + ".|";
	std::cout.width(11);
	if (Contact.getLastName().length() < 10)
		std::cout << Contact.getLastName() + "|";
	else
		std::cout << Contact.getLastName().substr(0, 9) + ".|";
	std::cout.width(11);
	if (Contact.getNickname().length() < 10)
		std::cout << Contact.getNickname() + "|";
	else
		std::cout << Contact.getNickname().substr(0, 9) + ".|";
	std::cout << std::endl;
}

void ft_table_header()
{
	std::cout.width(45);
	std::cout.fill('-');
	std::cout << "" << std::endl;
	std::cout.width(0);
	std::cout << "|";
	std::cout.width(11);
	std::cout.fill(' ');
	std::cout << "Index|";
	std::cout.width(11);
	std::cout << "First name|";
	std::cout.width(11);
	std::cout << "Last name|";
	std::cout.width(11);
	std::cout << "Nickname|";
	std::cout << std::endl;
	std::cout.width(45);
	std::cout.fill('-');
	std::cout << ""<< std::endl;
}

void ft_search_contact(Contact *Book)
{
	int					i;
	int					index;
	std::string			index_str;;
	std::stringstream	ss;

	if (!Book[0].getExist())
	{
		std::cout << "Contact book is empty" << std::endl;
		return;
	}
	ft_table_header();
	for (i = 0; (i < 8 && Book[i].getExist()); i++)
		ft_short_info(Book[i], i);
	std::cout.width(45);
	std::cout.fill('-');
	std::cout << "";
	std::cout << std::endl;
	while (true)
	{
		std::cout << "Enter index of contact (1-" << i << "): ";
		std::getline(std::cin, index_str);
		ss << index_str;
		ss >> index;
		ss.clear();
		ss.str("");
		if (index < 1 || index > i)
		{
			std::cout << "Wrong index number!" << std::endl;
			continue;
		}
		ft_full_info(Book[--index]);
		break;
	}
}

void ft_add_contact(Contact *Book)
{
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string login;
	std::string postal;
	std::string email;
	std::string phone;
	std::string birthday;
	std::string meal;
	std::string color;
	std::string secret;

	for (int i = 0; i < 8; i++)
	{
		if (!Book[i].getExist())
		{
			std::cout << "Enter first name: ";
			std::getline(std::cin, first_name);
			Book[i].setFirstName(first_name);
			std::cout << "Enter last name: ";
			std::getline(std::cin, last_name);
			Book[i].setLastName(last_name);
			std::cout << "Enter nickname: ";
			std::getline(std::cin, nickname);
			Book[i].setNickname(nickname);
			std::cout << "Enter login: ";
			std::getline(std::cin, login);
			Book[i].setLogin(login);
			std::cout << "Enter postal adress: ";
			std::getline(std::cin, postal);
			Book[i].setPostal(postal);
			std::cout << "Enter email adress: ";
			std::getline(std::cin, email);
			Book[i].setEmail(email);
			std::cout << "Enter phone number: ";
			std::getline(std::cin, phone);
			Book[i].setPhone(phone);
			std::cout << "Enter birthday date: ";
			std::getline(std::cin, birthday);
			Book[i].setBirthday(birthday);
			std::cout << "Enter your favorite meal: ";
			std::getline(std::cin, meal);
			Book[i].setMeal(meal);
			std::cout << "Enter your underwear color: ";
			std::getline(std::cin, color);
			Book[i].setColor(color);
			std::cout << "Enter your darkest secret: ";
			std::getline(std::cin, secret);
			Book[i].setSecret(secret);
			Book[i].setExist(true);
			std::cout << "Contact successfully added" << std::endl;
			return;
		}
	}
	std::cout << "Sorry, no empty space for new contact" << std::endl;
	return;
}

int main(int argc, char **argv)
{
	Contact		Book[8];
	std::string	choice;
	
	for (int i = 0; i < 1;)
	{
		std::cout << "Enter your comand (ADD, SEARCH or EXIT): ";
		if (!std::getline(std::cin, choice))
			i = 1;
		if (!choice.compare("ADD"))
			ft_add_contact(Book);
		if (!choice.compare("SEARCH"))
			ft_search_contact(Book);
		if (!choice.compare("EXIT"))
			i = 1;
	}
	return (0);
}
