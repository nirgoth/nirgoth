#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const &name, int apcost, int damage) : _name(name), _apcost(apcost), _damage(damage) {
	return;
}

AWeapon::AWeapon(void){
	return;
}

AWeapon::AWeapon(AWeapon const &el) : _name(el.getName()), _apcost(el.getAPCost()), _damage(el.getDamage()) {
	return;
}

AWeapon &AWeapon::operator=(AWeapon const &el)
{
	if (this != &el)
	{
		this->_name = el.getName();
		this->_apcost = el.getAPCost();
		this->_damage = el.getDamage();
	}
	return *this;
}

AWeapon::~AWeapon(void) {
	return;
}

std::string AWeapon::getName(void) const
{
	return this->_name;
}

int AWeapon::getAPCost(void) const {
	return this->_apcost;
}

int AWeapon::getDamage(void) const {
	return this->_damage;
}
