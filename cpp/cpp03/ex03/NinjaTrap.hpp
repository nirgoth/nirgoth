/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whortenc <whortenc@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 20:12:31 by whortenc          #+#    #+#             */
/*   Updated: 2021/04/25 20:12:32 by whortenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP
# include <iostream>
# include <sstream>
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap
{
	public:
		NinjaTrap(std::string name);
		NinjaTrap(void);
		NinjaTrap(NinjaTrap const &el);
		NinjaTrap &operator=(NinjaTrap const &el);
		~NinjaTrap(void);

		void ninjaShoebox(ClapTrap const & target);
		void ninjaShoebox(FragTrap const & target);
		void ninjaShoebox(NinjaTrap const & target);
		void ninjaShoebox(ScavTrap const & target);
};

#endif
