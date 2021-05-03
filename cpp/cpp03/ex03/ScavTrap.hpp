/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whortenc <whortenc@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 20:12:40 by whortenc          #+#    #+#             */
/*   Updated: 2021/04/25 20:12:41 by whortenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include <iostream>
# include <sstream>
# include "ClapTrap.hpp"
# include "FragTrap.hpp"



class ScavTrap : public ClapTrap
{
	public:
		ScavTrap(std::string name);
		ScavTrap(void);
		ScavTrap(ScavTrap const &el);
		ScavTrap &operator=(ScavTrap const &el);
		~ScavTrap(void);

		void challengeNewcomer(FragTrap const &target);
};

#endif
