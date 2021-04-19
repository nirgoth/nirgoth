/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbeach <rbeach@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 20:24:20 by rbeach            #+#    #+#             */
/*   Updated: 2021/02/18 20:55:35 by rbeach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

class Fixed
{
	private:
		int _nbr;
		static const int _bits = 8;

	public:
		Fixed(void);
		Fixed(Fixed const & fix);
		~Fixed(void);

		Fixed & operator=(Fixed const &fix);

		int getRawBits(void) const;
		void setRawBits(int const raw);
};

#endif
