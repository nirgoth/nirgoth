#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const &type) : _hp(hp), _type(type) {
	return;
}

Enemy::Enemy(void) {
	return;
}

Enemy::Enemy(Enemy const &el) : _hp(el.getHP()), _type(el.getType()) {
	return;
}

Enemy &Enemy::operator=(Enemy const &el)
{
	if (this != &el)
	{
		this->_hp = el.getHP();
		this->_type = el.getType();
	}
	return *this;
}

Enemy::~Enemy(void) {
	return;
}

std::string Enemy::getType(void) const {
	return this->_type;
}

int Enemy::getHP(void) const {
	return this->_hp;
}

void Enemy::takeDamage(int dmg) {
	if (dmg >= 0)
		this->_hp -= dmg;
}
