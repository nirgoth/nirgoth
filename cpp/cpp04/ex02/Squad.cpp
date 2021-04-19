#include "Squad.hpp"

Squad::Squad(void) {}

Squad::~Squad(void) {
	struct squad *el;
	struct squad *tmp;

	el = this->_squad;
	if (!el)
		return;
	while (el)
	{
		tmp = el;
		delete el->marine;
		el = el->next;
		tmp->next = NULL;
	}
}

Squad::Squad(Squad const &target) {
	const struct squad *target_el;

	target_el = target.getSquad();
	while (target_el->marine)
	{
		this->push(target_el->marine->clone());
		target_el = target_el->next;
	}
}

Squad &Squad::operator=(Squad const &target) {
	if (this != &target)
	{
		struct squad const *target_el;
		struct squad *el;
		struct squad *tmp;

		el = this->_squad;
		while (el->marine)
		{
			tmp = el;
			el = el->next;
			delete tmp->marine;
			tmp->next = NULL;
		}
		target_el = target.getSquad();
		while (target_el->marine)
		{
			this->push(target_el->marine->clone());
			target_el = target_el->next;
		}
	}
	return (*this);
}

int Squad::getCount() const {
	struct squad const *el;
	int res = 0;

	el = this->_squad;
	while (el)
	{
		res++;
		el = el->next;
	}
	return (res);
}

ISpaceMarine *Squad::getUnit(int num) const {
	ISpaceMarine		*res = NULL;
	int					count = this->getCount();
	struct squad const	*el;
	int					i = 0;

	if (num >= 0 && num < count)
	{
		el = this->_squad;
		while (i != num)
		{
			i++;
			el = el->next;
		}
		res = el->marine;
	}
	return res;
}

int Squad::push(ISpaceMarine *marine) {
	struct squad *el;
	int i = 1;

	el = this->_squad;
	if (!el)
	{
		this->_squad = new struct squad;
		this->_squad->marine = marine;
		return 1;
	}
	while (el->next)
	{
		i++;
		el = el->next;
	}
	el->next = new struct squad;
	el->next->marine = marine;
	return ++i;
}

const struct squad *Squad::getSquad(void) const {
	return this->_squad;
}
