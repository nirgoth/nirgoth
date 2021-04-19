#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"

int main()
{
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");
	Peon joe2(joe);
	Peon x("opa");

	x = joe;

	std::cout << robert << jim << joe << joe2 << x;

	robert.polymorph(jim);
	robert.polymorph(joe);

	return 0;
}
