#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP
# include "AWeapon.hpp"
# include <iostream>
# include <sstream>
# include <ostream>

class PlasmaRifle: public AWeapon
{
	public : 
		PlasmaRifle(void);
		virtual ~PlasmaRifle(void);
		PlasmaRifle(PlasmaRifle const &);
		PlasmaRifle &operator=(PlasmaRifle const &);

		virtual void	attack() const;
};

#endif
