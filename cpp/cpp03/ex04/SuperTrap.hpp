#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP
# include <iostream>
# include <sstream>
# include "FragTrap.hpp"
# include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap
{
	public:
		SuperTrap(void);
		SuperTrap(std::string name);
		SuperTrap(SuperTrap const &el);
		SuperTrap &operator=(SuperTrap const &el);
		~SuperTrap(void);
};

#endif
