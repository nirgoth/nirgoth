#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name):
	_hit_points(100),
	_max_hit_points(100),
	_energy_point(100),
	_max_energy_point(100),
	_level(1),
	_name(name),
	_mel_dmg(30),
	_ran_dmg(20),
	_armor(5)
{
	srand(time(NULL));
	std::cout << "FRAG <" << this->_name << "> created" << std::endl;
	return; 
}

FragTrap::FragTrap(void):
	_hit_points(100),
	_max_hit_points(100),
	_energy_point(100),
	_max_energy_point(100),
	_level(1),
	_name(""),
	_mel_dmg(30),
	_ran_dmg(20),
	_armor(5)
{
	srand(time(NULL));
	std::cout << "FRAG without name created" << std::endl;
	return; 
}

FragTrap::~FragTrap(void)
{
	std::cout << "FRAG <" << this->_name << "> died" << std::endl;
	return;
}

FragTrap &FragTrap::operator=(FragTrap const &el){
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

FragTrap::FragTrap(FragTrap const &el) : 
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

void FragTrap::rangedAttack(std::string const &target){
	std::cout << "FRAG <" << this->_name << "> attacks <" << target << "> at range, causing <" << this->_ran_dmg << "> points of damage!" << std::endl;
}

void FragTrap::meleeAttack(std::string const &target){
	std::cout << "FRAG <" << this->_name << "> attacks <" << target << "> melee, causing <" << this->_mel_dmg << "> points of damage!" << std::endl;
}

int FragTrap::takeDamage(unsigned int amount){
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
	std::cout << "FRAG <" << this->_name << "> takes <" << dmg << "> damage, actual hit_points <" << this->_hit_points << ">" << std::endl;
	return dmg;
}

int FragTrap::beRepaired(unsigned int amount){
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
	std::cout << "FRAG <" << this->_name << "> repaired <" << heal << "> heal_points, actual hit_points <" << this->_hit_points << ">" << std::endl;
	return heal;
}

std::string FragTrap::getName(void) const { return this->_name; }

void setWpn(wpn &wpn, std::string weapon, int dmg)
{
	wpn.weapon = weapon;
	wpn.dmg = dmg;
}

void FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	if (this->_energy_point < 25)
	{
		std::cout << "FRAG <" << this->_name << "> tried to use random weapon, but hasn't enought energy <" << this->_energy_point << ">" << std::endl;
		return;
	}
	wpn wpn[5];
	int choice;
	setWpn(wpn[0], "Banana machine", 5);
	setWpn(wpn[1], "Duck", 10);
	setWpn(wpn[2], "Apple", 15);
	setWpn(wpn[3], "Ponycorn", 20);
	setWpn(wpn[4], "Atomic bomb", 1000);
	choice = rand() % 5;
	std::cout << "FRAG <" << this->_name << "> attacks <" << target << "> with " << wpn[choice].weapon << ", causing <" << wpn[choice].dmg << "> points of damage!" << std::endl;
	this->_energy_point -= 25;
}
