#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title) : _name(name), _title(title)
{
	std::cout << this->_name << ", " << this->_title << ", is born!" << std::endl;
	return;
}

Sorcerer::Sorcerer(void) {
	return;
}

Sorcerer::Sorcerer(Sorcerer const &el): _name(el.getName()), _title(el.getTitle()) {
	std::cout << this->_name << ", " << this->_title << ", is born!" << std::endl;
}

Sorcerer &Sorcerer::operator=(Sorcerer const &el){
	if (this != &el)
	{
		this->_name = el.getName();
		this->_title = el.getTitle();
	}
	return *this;
}

Sorcerer::~Sorcerer(void){
	std::cout << this->_name << ", " << this->_title << ", is dead. Consequences will neaver be the same!" << std::endl;
	return;
}

std::string Sorcerer::getName(void) const {
	return this->_name;
}

std::string Sorcerer::getTitle(void) const {
	return this->_title;
}

void Sorcerer::polymorph(Victim const &el){
	el.getPolymorphed();
}

	std::ostream &
	operator<<(std::ostream &ofd, Sorcerer const &fix)
{
	ofd << "I am " << fix.getName() << ", " << fix.getTitle() << ", and I like ponies" << std::endl;
	return ofd;
}
