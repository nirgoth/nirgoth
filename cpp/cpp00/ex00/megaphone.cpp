/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbeach <rbeach@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 18:06:15 by rbeach            #+#    #+#             */
/*   Updated: 2021/02/12 08:58:50 by rbeach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>

int	main(int argc, char **argv)
{
	std::stringstream	ss;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int i = 1; argv[i]; i++)
			for (int m = 0; argv[i][m]; m++)
				ss << (char)toupper(argv[i][m]);
		std::cout << ss.str() << std::endl;
	}
	return (0);
}
