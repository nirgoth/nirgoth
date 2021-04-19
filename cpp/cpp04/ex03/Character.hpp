#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include "AMateria.hpp"

class Character
{
	private:
		std::string _name;
		AMateria *_inv[4] = {NULL, NULL, NULL, NULL};
		Character();

	public:
		Character(std::string name);
		~Character();
		Character(Character const &el);
		Character &operator=(Character const &el);

		std::string const &getName() const;

		void equip(AMateria *m);
		void unequip(int idx);
		void use(int idx, ICharacter &target);
};

#endif
