/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whortenc <whortenc@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 15:39:31 by whortenc          #+#    #+#             */
/*   Updated: 2021/04/21 15:39:32 by whortenc         ###   ########.fr       */
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
