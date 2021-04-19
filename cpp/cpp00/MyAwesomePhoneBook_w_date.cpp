/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MyAwesomePhoneBook.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbeach <rbeach@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 18:06:15 by rbeach            #+#    #+#             */
/*   Updated: 2021/02/12 09:33:36 by rbeach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void ft_get_time(std::tm *birthday)
{
		for (int i = 0; i < 1;)
		{
			std::string	day;
			std::stringstream ss;

			std::cout << "Enter birthday date in format DD.MM.YYYY: ";
			if (!std::getline(std::cin, day))
				i = 1;
			ss << day;
			ss >> std::get_time(birthday, "%d.%m.%Y");
			if (ss.fail())
				std::cout << "Parse failed\n";
			else
				i = 1;
		}
		return;
}

void ft_add_contact(Contact *Book)
{
	std::string		first_name;
	std::string		last_name;
	std::string		nickname;
	std::tm			birthday = {};
	std::string		meal;
	std::string		color;
	std::string		secret;

	for (int i = 0; i < 8; i++)
	{
		if (!Book[i].get_exist())
		{
			std::cout << "Enter first name: ";
			std::getline(std::cin, first_name);
			std::cout << "Enter last name: ";
			std::getline(std::cin, last_name);
			std::cout << "Enter nickname name: ";
			std::getline(std::cin, nickname);
			ft_get_time(&birthday);
			std::cout << "Enter your favourite meal: ";
			std::getline(std::cin, meal);
			std::cout << "Enter your underwear color: ";
			std::getline(std::cin, color);
			std::cout << "Enter your main secret: ";
			std::getline(std::cin, secret);
			Book[i].add(first_name, last_name, nickname, birthday, meal, color, secret);
			std::cout << "Contact successfully added" << std::endl;
			return;
		}
	}
	std::cout << "Sorry, no empty space for new contact" << std::endl;
	return;
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
	int					index = 0;
	std::string			index_str;;
	std::stringstream	ss;

	if (!Book[0].get_exist())
	{
		std::cout << "Contact book is empty" << std::endl;
		return;
	}
	ft_table_header();
	for (i = 0; (i < 8 && Book[i].get_exist()); i++)
		Book[i].show_short(i);
	std::cout.width(45);
	std::cout.fill('-');
	std::cout << "";
	std::cout << std::endl;
	while (true)
	{
		std::cout << "Enter index of contact (0-" << i - 1 << "): ";
		std::getline(std::cin, index_str);
		ss << index_str;
		ss >> index;
		ss.clear();
		if (index < 0 || index > i - 1 || (!index && index_str != "0"))
		{
			std::cout << "Wrong index number!" << std::endl;
			continue;
		}
		Book[index].full_info();
		break;
	}
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
