/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whortenc <whortenc@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 16:39:34 by whortenc          #+#    #+#             */
/*   Updated: 2021/04/19 16:39:36 by whortenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_H
# define PONY_H

# include <iostream>


class	Pony 
{
	private:
		std::string		_pony_name;

	public:
		Pony(std::string pony_name);
		~Pony(void);

		void action1(void);
		void action2(void);
};

#endif
