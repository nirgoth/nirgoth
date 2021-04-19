#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include <iostream>
# include <sstream>
# include <ostream>
# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character
{
	private:
		Character(void);
		std::string	_name;
		int			_ap;
		AWeapon*	_weap;

	public:
		Character(std::string const & name);
		~Character();
		Character(Character const &);
		Character &operator=(Character const &);
		void recoverAP();
		void equip(AWeapon*);
		void attack(Enemy*);
		std::string getName() const;
		int getAP() const;
		AWeapon *getWeapon(void) const;
};

std::ostream &operator<<(std::ostream &ofd, Character const &el);

#endif
