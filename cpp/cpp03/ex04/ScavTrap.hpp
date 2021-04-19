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
