#include "Victim.hpp"

Victim::Victim(std::string name): _name(name){
	std::cout << "Some random victim called " << this->_name << " just appeared!" << std::endl;
	return;
}

Victim::Victim(void) {
	return;
}

Victim::Victim(Victim const &el): _name(el._name) {
	std::cout << "Some random victim called " << this->_name << " just appeared!" << std::endl;
}

Victim &Victim::operator=(Victim const &el){
	if (this != &el)
		this->_name = el._name;
	return *this;
}

Victim::~Victim(void){
	std::cout << "Victim " << this->_name << " just died for no apparent reason!" << std::endl;
	return;
}

std::string Victim::getName(void) const {
	return this->_name;
}

void Victim::getPolymorphed(void) const {
	std::cout << this->_name << " has been turned into a cute little sheep!" << std::endl;
}

std::ostream &operator<<(std::ostream &ofd, Victim const &fix) {
	ofd << "I'm " << fix.getName() << ", and I like otters" << std::endl;
	return ofd;
}
