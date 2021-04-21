/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whortenc <whortenc@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 14:44:14 by whortenc          #+#    #+#             */
/*   Updated: 2021/04/21 14:44:15 by whortenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_H
# define HUMAN_H
# include <iostream>
# include "Brain.hpp"

class	Human
{
	private:
		Brain _brain;

	public:
		Human(void);
		~Human(void);

		std::string	identify();
		Brain&		getBrain();
};

#endif
