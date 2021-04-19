/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbeach <rbeach@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 13:33:38 by rbeach            #+#    #+#             */
/*   Updated: 2021/02/16 09:03:33 by rbeach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H
# include <iostream>

class	Weapon
{
	private:
		std::string _type;

	public:
		Weapon(std::string type);
		~Weapon(void);

		std::string getType(void);
		void setType(std::string type);
};

#endif
