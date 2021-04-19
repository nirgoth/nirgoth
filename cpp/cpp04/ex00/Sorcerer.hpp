#ifndef SORCERER_HPP
# define SORCERER_HPP
# include <iostream>
# include <sstream>
# include <ostream>
# include "Victim.hpp"

class Sorcerer
{
	private:
		std::string _name;
		std::string _title;

		Sorcerer(void);

	public:
		Sorcerer(std::string name, std::string title);
		Sorcerer(Sorcerer const &el);
		Sorcerer &operator=(Sorcerer const &el);
		~Sorcerer(void);

		std::string getName(void) const;
		std::string getTitle(void) const;
		void polymorph(Victim const &el);
};

std::ostream &operator<<(std::ostream &ofd, Sorcerer const &fix);

#endif
