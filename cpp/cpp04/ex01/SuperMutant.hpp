#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP
# include <iostream>
# include <sstream>
# include <ostream>
# include "Enemy.hpp"

class SuperMutant: public Enemy
{
	public:
		SuperMutant(void);
		virtual ~SuperMutant();
		SuperMutant(SuperMutant const &);
		SuperMutant &operator=(SuperMutant const &);

		virtual void takeDamage(int);
};

#endif
