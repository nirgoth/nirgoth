#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP
# include <iostream>
# include <sstream>
# include <ostream>
# include "Enemy.hpp"

class RadScorpion: public Enemy
{
	public:
		RadScorpion(void);
		virtual ~RadScorpion();
		RadScorpion(RadScorpion const &);
		RadScorpion &operator=(RadScorpion const &);
};

#endif
