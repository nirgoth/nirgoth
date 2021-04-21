/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whortenc <whortenc@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 14:20:41 by whortenc          #+#    #+#             */
/*   Updated: 2021/04/21 14:20:42 by whortenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>


class	Zombie 
{
	private:
		std::string	_name;
		std::string	_type;

	public:
		Zombie(void);
		~Zombie(void);

		void announce(void);
		void setNameType(std::string name, std::string type);
};

#endif
