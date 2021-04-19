/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbeach <rbeach@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 13:33:38 by rbeach            #+#    #+#             */
/*   Updated: 2021/02/13 15:24:13 by rbeach           ###   ########.fr       */
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
