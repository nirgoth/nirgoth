#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"
#include "Character.hpp"

int main()
{

	Character *me = new Character("me");

	std::cout << *me;

	Enemy *rad = new RadScorpion();
	Enemy *super = new SuperMutant();

	AWeapon *plasma = new PlasmaRifle();
	AWeapon *power = new PowerFist();

	me->equip(plasma);
	std::cout << *me;

	me->equip(power);
	me->attack(rad);
	std::cout << *me;

	me->equip(plasma);
	std::cout << *me;

	me->attack(rad);
	std::cout << *me;
	
	me->attack(rad);
	std::cout << *me;

	me->equip(power);
	me->attack(super);
	std::cout << *me;

	me->attack(super);
	std::cout << *me;
	me->attack(super); //not enought AP for attack
	me->attack(super); //not enought AP for attack
	me->attack(super); //not enought AP for attack
	me->attack(super); //not enought AP for attack

	me->recoverAP();
	me->recoverAP();
	me->recoverAP();
	me->recoverAP();
	std::cout << *me;

	me->attack(super);
	me->attack(super);
	me->attack(super);
	me->attack(super);
	me->attack(super);
	me->recoverAP();
	me->recoverAP();
	me->recoverAP();
	me->recoverAP();
	me->attack(super);
	me->attack(super);
	me->attack(super);
	me->attack(super);
	std::cout << *me;

	return 0;
}
