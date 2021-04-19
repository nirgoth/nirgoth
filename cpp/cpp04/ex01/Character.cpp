#include "Character.hpp"

Character::Character(std::string const &name): _name(name), _ap(40) {
	return;
}

Character::Character(void)
{
	return;
}

Character::~Character(void)
{
	return;
}

Character::Character(Character const &el) : _name(el.getName()), _ap(el.getAP()), _weap(el.getWeapon())
{
	return;
}

Character &Character::operator=(Character const &el)
{
	if (this != &el)
	{
		this->_name = el.getName();
		this->_ap = el.getAP();
		this->_weap = el.getWeapon();
	}
	return *this;
}

void Character::Character::recoverAP(void)
{
	if (this->_ap < 40)
		this->_ap += 10;
	if (this->_ap > 40)
		this->_ap = 40;
	return;
}

void Character::Character::equip(AWeapon *weapon)
{
	this->_weap = weapon;
	return;
}

void Character::Character::attack(Enemy *enemy)
{
	if (!enemy)
	{
		std::cout << "Can't find target" << std::endl;
		return;
	}
	if (_weap)
	{
		if (_ap >= this->_weap->getAPCost())
		{
			std::cout << this->_name << " attacks " << enemy->getType() << " with a " << this->_weap->getName() << std::endl;
			this->_ap -= this->_weap->getAPCost();
			this->_weap->attack();
			enemy->takeDamage(this->_weap->getDamage());
			if (enemy->getHP() <= 0)
				delete enemy;
		}
	}
}

std::string Character::getName(void) const
{
	return this->_name;
}

int Character::getAP(void) const
{
	return this->_ap;
}

AWeapon *Character::getWeapon(void) const
{
	return this->_weap;
}

std::ostream &operator<<(std::ostream &ofd, Character const &el)
{
	if (el.getWeapon())
		ofd << el.getName() << " has " << el.getAP() << " AP and wields a " << el.getWeapon()->getName() << std::endl;
	else
		ofd << el.getName() << " has " << el.getAP() << " AP and is unarmed" << std::endl;
	return ofd;
}
