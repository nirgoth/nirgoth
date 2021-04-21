/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whortenc <whortenc@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 14:18:47 by whortenc          #+#    #+#             */
/*   Updated: 2021/04/21 14:18:48 by whortenc         ###   ########.fr       */
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
