#include "Peon.hpp"

Peon::Peon(std::string name): Victim(name) {
	std::cout << "Zog zog." << std::endl;
	return;
}

Peon::Peon(void) {
	return;
}

Peon::Peon(Peon const &el): Victim(el) {
	std::cout << "Zog zog." << std::endl;
}

Peon &Peon::operator=(Peon const &el){
	if (this != &el)
		this->_name = el.getName();
	return *this;
}

Peon::~Peon(void){
	std::cout << "Bleuark..." << std::endl;
	return;
}

void Peon::getPolymorphed(void) const {
	std::cout << this->_name << " has been turned into a pink pony!" << std::endl;
}
