/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whortenc <whortenc@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 14:21:04 by whortenc          #+#    #+#             */
/*   Updated: 2021/04/21 14:21:05 by whortenc         ###   ########.fr       */
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
