#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include <iostream>
# include <sstream>

typedef struct {
	std::string	weapon;
	int			dmg;
} wpn;

class FragTrap
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
		FragTrap(std::string name);
		FragTrap(void);
		FragTrap(FragTrap const &el);
		FragTrap &operator=(FragTrap const &el);
		~FragTrap(void);

		void rangedAttack(std::string const &target);
		void meleeAttack(std::string const &target);
		int takeDamage(unsigned int amount);
		int beRepaired(unsigned int amount);
		void vaulthunter_dot_exe(std::string const &target);
		std::string getName(void) const;
};

#endif
