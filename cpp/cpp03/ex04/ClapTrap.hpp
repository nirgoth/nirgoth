/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whortenc <whortenc@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 20:12:52 by whortenc          #+#    #+#             */
/*   Updated: 2021/04/25 20:12:53 by whortenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>
# include <sstream>

class ClapTrap
{
	protected:
		int _hit_points;
		int _max_hit_points;
		int _energy_point;
		int _max_energy_point;
		int _level;
		std::string _name;
		int _mel_dmg;
		int _ran_dmg;
		int _armor;

	public:
		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(int hit_points, int max_hit_points, int energy_point, int max_energy_point, int level, std::string name, int mel_dmg, int ran_dmg, int armor);
		ClapTrap(ClapTrap const &el);
		ClapTrap &operator=(ClapTrap const &el);
		virtual ~ClapTrap(void);

		void rangedAttack(std::string const &target);
		void meleeAttack(std::string const &target);
		int takeDamage(unsigned int amount);
		int beRepaired(unsigned int amount);
		std::string getName(void) const;
};

#endif
