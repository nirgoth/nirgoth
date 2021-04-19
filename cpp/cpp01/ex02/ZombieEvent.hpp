/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbeach <rbeach@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 13:33:38 by rbeach            #+#    #+#             */
/*   Updated: 2021/02/13 15:11:11 by rbeach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_H
# define ZOMBIEEVENT_H

# include <iostream>
# include <sstream>
# include <stdlib.h>
# include <time.h>
# include "Zombie.hpp"


class	ZombieEvent
{
	private:
		std::string	_type;

	public:
		ZombieEvent(void);
		~ZombieEvent(void);
		
		void	setZombieType(std::string type);
		Zombie*	newZombie(std::string name);
};

#endif
