/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbeach <rbeach@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 14:24:49 by rbeach            #+#    #+#             */
/*   Updated: 2021/02/13 15:43:18 by rbeach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_H
# define ZOMBIEHORDE_H

# include <iostream>
# include <sstream>
# include <stdlib.h>
# include "Zombie.hpp"

class ZombieHorde
{
	private:
		Zombie *_zombies;

	public:
		ZombieHorde(int N);
		~ZombieHorde(void);

		std::string zombieName(void);
};

#endif
