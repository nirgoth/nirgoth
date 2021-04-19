#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include <iostream>
# include <sstream>
# include "ClapTrap.hpp"

typedef struct {
	std::string	weapon;
	int			dmg;
} wpn;

class FragTrap : public virtual ClapTrap
{
	public:
		FragTrap(std::string name);
		FragTrap(void);
		FragTrap(FragTrap const &el);
		FragTrap &operator=(FragTrap const &el);
		virtual ~FragTrap(void);

		void vaulthunter_dot_exe(std::string const &target);
};

#endif
