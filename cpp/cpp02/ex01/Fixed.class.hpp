/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbeach <rbeach@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 20:24:20 by rbeach            #+#    #+#             */
/*   Updated: 2021/02/19 17:25:08 by rbeach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP
# include <iostream>
# include <ostream>
# include <sstream>
# include <cmath>

	class Fixed
{
	private:
		int _nbr;
		static const int _bits = 8;

	public:
		Fixed(void);
		Fixed(int const x);
		Fixed(float const x);
		Fixed(Fixed const & fix);
		~Fixed(void);

		Fixed & operator=(Fixed const &fix);

		int toInt(void) const;
		float toFloat(void) const;
		int getRawBits(void) const;
		void setRawBits(int const raw);
};

std::ostream &operator<<(std::ostream &ofd, Fixed const &fix);

#endif
