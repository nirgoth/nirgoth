/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbeach <rbeach@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 13:33:38 by rbeach            #+#    #+#             */
/*   Updated: 2021/02/16 15:18:27 by rbeach           ###   ########.fr       */
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
