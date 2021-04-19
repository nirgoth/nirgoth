#ifndef VICTIM_HPP
# define VICTIM_HPP
# include <iostream>
# include <sstream>
# include <ostream>

class Victim
{
	protected:
		std::string _name;

		Victim(void);

	public:
		Victim(std::string name);
		Victim(Victim const &el);
		Victim &operator=(Victim const &el);
		~Victim(void);

		std::string getName(void) const;
		void virtual getPolymorphed(void) const;
};

std::ostream &operator<<(std::ostream &ofd, Victim const &fix);

#endif
