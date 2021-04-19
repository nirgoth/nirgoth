#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP
# include <iostream>
# include <sstream>
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap
{
	public:
		NinjaTrap(std::string name);
		NinjaTrap(void);
		NinjaTrap(NinjaTrap const &el);
		NinjaTrap &operator=(NinjaTrap const &el);
		~NinjaTrap(void);

		void ninjaShoebox(ClapTrap const & target);
		void ninjaShoebox(FragTrap const & target);
		void ninjaShoebox(NinjaTrap const & target);
		void ninjaShoebox(ScavTrap const & target);
};

#endif
