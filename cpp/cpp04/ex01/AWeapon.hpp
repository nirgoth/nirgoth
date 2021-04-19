#ifndef AWEAPON_HPP
# define AWEAPON_HPP
# include <iostream>
# include <sstream>
# include <ostream>

class AWeapon
{
	private:
		std::string	_name;
		int			_apcost;
		int			_damage;

		AWeapon(void);

	public : 
		AWeapon(std::string const &name, int apcost, int damage);
		virtual ~AWeapon(void);
		AWeapon(AWeapon const &);
		AWeapon &operator=(AWeapon const &);

		std::string		getName() const;
		int				getAPCost() const;
		int				getDamage() const;
		virtual void	attack() const = 0;
};

#endif
