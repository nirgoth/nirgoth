#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name):
	_hit_points(100),
	_max_hit_points(100),
	_energy_point(50),
	_max_energy_point(50),
	_level(1),
	_name(name),
	_mel_dmg(20),
	_ran_dmg(15),
	_armor(3)
{
	srand(time(NULL));
	std::cout << "SCAV <" << this->_name << "> created" << std::endl;
	return; 
}

ScavTrap::ScavTrap(void):
	_hit_points(100),
	_max_hit_points(100),
	_energy_point(50),
	_max_energy_point(50),
	_level(1),
	_name(""),
	_mel_dmg(20),
	_ran_dmg(15),
	_armor(3)
{
	srand(time(NULL));
	std::cout << "SCAV without name created" << std::endl;
	return; 
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "SCAV <" << this->_name << "> died" << std::endl;
	return;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &el){
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

ScavTrap::ScavTrap(ScavTrap const &el) : 
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

void ScavTrap::rangedAttack(std::string const &target){
	std::cout << "SCAV <" << this->_name << "> attacks <" << target << "> at range, causing <" << this->_ran_dmg << "> points of damage!" << std::endl;
}

void ScavTrap::meleeAttack(std::string const &target){
	std::cout << "SCAV <" << this->_name << "> attacks <" << target << "> melee, causing <" << this->_mel_dmg << "> points of damage!" << std::endl;
}

int ScavTrap::takeDamage(unsigned int amount){
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
	std::cout << "SCAV <" << this->_name << "> takes <" << dmg << "> damage, actual hit_points <" << this->_hit_points << ">" << std::endl;
	return dmg;
}

int ScavTrap::beRepaired(unsigned int amount){
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
	std::cout << "SCAV <" << this->_name << "> repaired <" << heal << "> heal_points, actual hit_points <" << this->_hit_points << ">" << std::endl;
	return heal;
}

void ScavTrap::challengeNewcomer(FragTrap const &target)
{
	std::string challenges[] {"say \"Hello!\" and go away", "send me 5,000 rubles", "write your best joke to adm channel"};
	std::cout << "SCAV <" << this->_name << "> prepared for you, <" << target.getName() << ">, challenge: " << challenges[rand() % 3] << std::endl;
}

