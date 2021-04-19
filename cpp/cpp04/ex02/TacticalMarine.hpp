#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP
# include "ISpaceMarine.hpp"

class TacticalMarine: public ISpaceMarine
{
	public:
		TacticalMarine(void);
		~TacticalMarine(void);
		TacticalMarine(TacticalMarine const &el);
		TacticalMarine &operator=(TacticalMarine const &el);

		ISpaceMarine *clone() const;
		void battleCry() const;
		void rangedAttack() const;
		void meleeAttack() const;
};

#endif
