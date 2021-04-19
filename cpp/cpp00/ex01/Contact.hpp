/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbeach <rbeach@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 13:33:38 by rbeach            #+#    #+#             */
/*   Updated: 2021/02/17 21:28:12 by rbeach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H
# include <iostream>
# include <iomanip>
# include <sstream>

class	Contact {

	private:
		std::string		_first_name;
		std::string		_last_name;
		std::string		_nickname;
		std::string		_login;
		std::string 	_postal;
		std::string 	_email;
		std::string		_phone;
		std::string		_birthday;
		std::string		_meal;
		std::string		_color;
		std::string		_secret;
		bool			_exist;

	public:
		Contact(void);
		~Contact(void);

		void setFirstName(std::string first_name);
		void setLastName(std::string last_name);
		void setNickname(std::string nickname_name);
		void setLogin(std::string login);
		void setPostal(std::string postal);
		void setEmail(std::string email);
		void setPhone(std::string phone);
		void setBirthday(std::string birthday);
		void setMeal(std::string meal);
		void setColor(std::string color);
		void setSecret(std::string secret);
		void setExist(bool exist);

		std::string	getFirstName(void);
		std::string	getLastName(void);
		std::string	getNickname(void);
		std::string	getLogin(void);
		std::string	getPostal(void);
		std::string	getEmail(void);
		std::string	getPhone(void);
		std::string	getBirthday(void);
		std::string	getMeal(void);
		std::string	getColor(void);
		std::string	getSecret(void);
		bool		getExist(void);
};

#endif
