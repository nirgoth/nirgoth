#ifndef PEON_HPP
# define PEON_HPP
# include <iostream>
# include <sstream>
# include <ostream>
# include "Victim.hpp"

class Peon : public Victim
{
	private:
		Peon(void);

	public:
		Peon(std::string name);
		Peon(Peon const &el);
		Peon &operator=(Peon const &el);
		~Peon(void);

		void virtual getPolymorphed(void) const;
};

#endif
