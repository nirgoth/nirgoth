#ifndef POWERFIST_HPP
# define POWERFIST_HPP
# include "AWeapon.hpp"
# include <iostream>
# include <sstream>
# include <ostream>

class PowerFist: public AWeapon
{
	public : 
		PowerFist(void);
		virtual ~PowerFist(void);
		PowerFist(PowerFist const &);
		PowerFist &operator=(PowerFist const &);

		virtual void	attack() const;
};

#endif
