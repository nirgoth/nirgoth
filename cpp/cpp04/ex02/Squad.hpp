#ifndef SQUAD_HPP
# define SQUAD_HPP
# include "ISquad.hpp"

struct squad {
	ISpaceMarine *marine = NULL;
	struct squad *next = NULL;
};

class Squad : public ISquad
{
	private:
		struct squad *_squad = NULL;

	public:
		Squad(void);
		~Squad(void);
		Squad(Squad const &el);
		Squad &operator=(Squad const &el);

		int					getCount(void) const;
		ISpaceMarine		*getUnit(int) const;
		int					push(ISpaceMarine *);
		const struct squad	*getSquad(void) const;
};

#endif
