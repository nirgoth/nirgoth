#ifndef ENEMY_HPP
#define ENEMY_HPP
#include <iostream>
#include <sstream>
#include <ostream>

class Enemy
{
	private:
		int			_hp;
		std::string	_type;

		Enemy(void);

		public:
			Enemy(int hp, std::string const &type);
			virtual ~Enemy();
			Enemy (Enemy const &);
			Enemy &operator=(Enemy const &);
			std::string getType() const;
			int getHP() const;

			virtual void takeDamage(int);
};

#endif
