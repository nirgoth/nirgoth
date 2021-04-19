#include "ISpaceMarine.hpp"
#include "ISquad.hpp"
#include "Squad.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"

int main()
{
	ISpaceMarine *bob = new TacticalMarine;
	ISpaceMarine *jim = new AssaultTerminator;
	ISquad *vlc = new Squad;
	
	ISquad *empty = new Squad;
	std::cout << "setUnit for empty Squad: " << empty->getCount() << std::endl;
	std::cout << "Trying for empty Squad: empty->getUnit(-1); empty->getUnit(0); empty->getUnit(1); delete empty;" << std::endl;
	empty->getUnit(-1);
	empty->getUnit(0);
	empty->getUnit(1);
	delete empty;
	std::cout << "If you see this message it means no segafault and it's good" << std::endl;

	vlc->push(bob);
	vlc->push(jim);

	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine *cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	delete vlc;
	return 0;
}
