#include "ClapTrap.hpp"

ClapTrap::ClapTrap(int hit_points, int max_hit_points, int energy_point, int max_energy_point, int level, std::string name, int mel_dmg, int ran_dmg, int armor):
	_hit_points(hit_points),
	_max_hit_points(max_hit_points),
	_energy_point(energy_point),
	_max_energy_point(max_energy_point),
	_level(level),
	_name(name),
	_mel_dmg(mel_dmg),
	_ran_dmg(ran_dmg),
	_armor(armor)
{
	srand(time(NULL));
	std::cout << "Claptrap <" << this->_name << "> created" << std::endl;
	return; 
}

ClapTrap::ClapTrap(void):
	_hit_points(0),
	_max_hit_points(0),
	_energy_point(0),
	_max_energy_point(0),
	_level(0),
	_name(""),
	_mel_dmg(0),
	_ran_dmg(0),
	_armor(0)
{
	srand(time(NULL));
	std::cout << "Default ClapTrap created" << std::endl;
	return; 
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap <" << this->_name << "> died" << std::endl;
	return;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &el){
	if (this != &el)
	{
		this->_hit_points = el._hit_points;
		this->_max_hit_points = el._max_hit_points;
		this->_energy_point = el._energy_point;
		this->_max_energy_point = el._max_energy_point;
		this->_level = el._level;
		this->_name = el._name;
		this->_mel_dmg = el._mel_dmg;
		this->_ran_dmg = el._ran_dmg;
		this->_armor = el._armor;
	}
	return *this;
}

ClapTrap::ClapTrap(ClapTrap const &el) : 
	_hit_points(el._hit_points),
	_max_hit_points(el._max_hit_points),
	_energy_point(el._energy_point),
	_max_energy_point(el._max_energy_point),
	_level(el._level),
	_name(el._name),
	_mel_dmg(el._mel_dmg),
	_ran_dmg(el._ran_dmg),
	_armor(el._armor)
{ return; }

void ClapTrap::rangedAttack(std::string const &target){
	std::cout << "<" << this->_name << "> attacks <" << target << "> at range, causing <" << this->_ran_dmg << "> points of damage!" << std::endl;
}

void ClapTrap::meleeAttack(std::string const &target){
	std::cout << "<" << this->_name << "> attacks <" << target << "> melee, causing <" << this->_mel_dmg << "> points of damage!" << std::endl;
}

int ClapTrap::takeDamage(unsigned int amount){
	int dmg = 0;

	if ((int)amount > (this->_hit_points + this->_armor))
	{
		dmg = this->_hit_points;
		this->_hit_points = 0;
	}
	else if (this->_armor < (int)amount)
	{
		dmg = amount - this->_armor;
		this->_hit_points -= dmg;
	}
	std::cout << "<" << this->_name << "> takes <" << dmg << "> damage, actual hit_points <" << this->_hit_points << ">" << std::endl;
	return dmg;
}

int ClapTrap::beRepaired(unsigned int amount){
	int heal = 0;
	if (this->_hit_points < this->_max_hit_points)
	{
		if (this->_max_hit_points - this->_hit_points < (int)amount)
		{
			heal = this->_max_hit_points - this->_hit_points;
			this->_hit_points = this->_max_hit_points;
		}
		else
		{
			heal = amount;
			this->_hit_points += amount;
		}
	}
	std::cout << "<" << this->_name << "> repaired <" << heal << "> heal_points, actual hit_points <" << this->_hit_points << ">" << std::endl;
	return heal;
}

std::string ClapTrap::getName(void) const { return this->_name; }
