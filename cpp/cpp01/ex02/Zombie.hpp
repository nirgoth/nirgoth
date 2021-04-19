/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbeach <rbeach@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 13:33:38 by rbeach            #+#    #+#             */
/*   Updated: 2021/02/12 13:21:32 by rbeach           ###   ########.fr       */
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
		Zombie(std::string name, std::string type);
		~Zombie(void);

		void announce(void);
};

#endif
