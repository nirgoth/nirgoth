#ifndef CURE_HPP
# define CURE_HPP
# include <iostream>
# include "AMateria.hpp"

class Cure: public AMateria
{
	public:
		Cure();
		~Cure();
		Cure(Cure const &el);
		Cure &operator=(Cure const &el);

		Cure *clone() const;
		void use(ICharacter &target);
};

#endif
