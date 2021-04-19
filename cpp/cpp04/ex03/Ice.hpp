#ifndef ICE_HPP
# define ICE_HPP
# include <iostream>
# include "AMateria.hpp"

class Ice: public AMateria
{
	public:
		Ice();
		~Ice();
		Ice(Ice const &el);
		Ice &operator=(Ice const &el);

		Ice *clone() const;
		void use(ICharacter &target);
};

#endif
