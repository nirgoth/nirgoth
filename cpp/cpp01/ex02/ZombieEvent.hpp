/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whortenc <whortenc@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 14:18:59 by whortenc          #+#    #+#             */
/*   Updated: 2021/04/21 14:19:00 by whortenc         ###   ########.fr       */
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
