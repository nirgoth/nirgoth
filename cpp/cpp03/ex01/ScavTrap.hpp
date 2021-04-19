#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include <iostream>
# include <sstream>
# include "FragTrap.hpp"

class ScavTrap
{
	private:
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
		ScavTrap(std::string name);
		ScavTrap(void);
		ScavTrap(ScavTrap const &el);
		ScavTrap &operator=(ScavTrap const &el);
		~ScavTrap(void);

		void rangedAttack(std::string const &target);
		void meleeAttack(std::string const &target);
		int takeDamage(unsigned int amount);
		int beRepaired(unsigned int amount);
		void challengeNewcomer(FragTrap const &target);
};

#endif
