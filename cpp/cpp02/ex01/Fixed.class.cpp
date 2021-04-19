/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbeach <rbeach@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 20:38:22 by rbeach            #+#    #+#             */
/*   Updated: 2021/02/24 20:35:56 by rbeach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

Fixed::Fixed(void): _nbr(0) {
	std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::Fixed(int const x)
{
	std::cout << "Int constructor called" << std::endl;
	this->_nbr = x << this->_bits;
	return;
}

Fixed::Fixed(float const x)
{
	std::cout << "Float constructor called" << std::endl;
	this->_nbr = (int)roundf(x * (1 << this->_bits));
	return;
}

Fixed::Fixed(Fixed const &fix) {
	std::cout << "Copy constructor called" << std::endl;
	*this = fix;
	return;
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
}

Fixed & Fixed::operator=(Fixed const & fix) {
	std::cout << "Assignation operator called" << std::endl;
	if (this != &fix)
		this->_nbr = fix.getRawBits();
	return *this;
}

int Fixed::getRawBits(void) const {
	return this->_nbr;
}

void Fixed::setRawBits(int const raw) {
	this->_nbr = raw;
}

int Fixed::toInt(void) const {
	return (this->_nbr >> this->_bits);
}

float Fixed::toFloat(void) const {
	return ((float)this->_nbr / (1 << this->_bits));
}

std::ostream & operator<<(std::ostream &ofd, Fixed const &fix){
	ofd << fix.toFloat();
	return ofd;
}
/*
int main(void)
{
	Fixed a;
	Fixed const b(10);
	Fixed const c(42.42f);
	Fixed const d(b);

	a = Fixed(1234.4321f);

	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;

	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;


	return 0;
}
*/
