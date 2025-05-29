/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirwatan <hirwatan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 12:51:11 by hirwatan          #+#    #+#             */
/*   Updated: 2025/05/29 16:35:10 by hirwatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed()
{
    // std::cout << "Default constructor called" << std::endl;
    this->_fixed_point_value = 0;
}

Fixed::Fixed(const int n)
{
    // std::cout << "Int constructor called" << std::endl;
    this->_fixed_point_value = n << this->_fractional_bits;
}

Fixed::Fixed(const float n)
{
    // std::cout << "Float constructor called" << std::endl;
    this->_fixed_point_value = roundf(n * (1 << this->_fractional_bits));
}

Fixed::Fixed(const Fixed &other)
{
    // std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

Fixed &Fixed::operator=(const Fixed &other)
{
    // std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
    {
        this->_fixed_point_value = other.getRawBits();
    }
    return *this;
}

Fixed::~Fixed()
{
    // std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
    return this->_fixed_point_value;
}

void Fixed::setRawBits(int const raw)
{
    this->_fixed_point_value = raw;
}

float Fixed::toFloat(void) const
{
    return static_cast<float>(this->_fixed_point_value) / (1 << this->_fractional_bits);
}

int Fixed::toInt(void) const
{
    return this->_fixed_point_value >> this->_fractional_bits;
}

bool Fixed::operator>(const Fixed &other) const
{
    return (this->getRawBits() > other.getRawBits());
}

bool Fixed::operator<(const Fixed &other) const
{
    return (this->getRawBits() < other.getRawBits());
}

bool Fixed::operator>=(const Fixed &other) const
{
    return (this->getRawBits() >= other.getRawBits());
}

bool Fixed::operator<=(const Fixed &other) const
{
    return (this->getRawBits() <= other.getRawBits());
}

bool Fixed::operator==(const Fixed &other) const
{
    return (this->getRawBits() == other.getRawBits());
}

bool Fixed::operator!=(const Fixed &other) const
{
    return (this->getRawBits() != other.getRawBits());
}

Fixed &Fixed::operator++(void)
{
    ++this->_fixed_point_value;
    return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed tmp(*this);
    tmp._fixed_point_value = this->_fixed_point_value++;
    return tmp;
}

Fixed &Fixed::operator--(void)
{
    --this->_fixed_point_value;
    return *this;
}

Fixed Fixed::operator--(int)
{
    Fixed tmp;
    tmp._fixed_point_value = this->_fixed_point_value--;
    return tmp;
}

std::ostream &operator<<(std::ostream &o, Fixed const &i)
{
    o << i.toFloat();
    return o;
}

Fixed Fixed::operator+(const Fixed &other) const
{
    return Fixed(this->toFloat() + other.toFloat());
}

Fixed Fixed::operator-(const Fixed &other) const
{
    return Fixed(this->toFloat() - other.toFloat());
}

Fixed Fixed::operator*(const Fixed &other) const
{
    return Fixed(this->toFloat() * other.toFloat());
}

Fixed Fixed::operator/(const Fixed &other) const
{
    if (other.toFloat() == 0)
    {
        std::cerr << "Error: Divide by Zero" << std::endl;
        return Fixed(0);
    }
    return Fixed(this->toFloat() / other.toFloat());
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
    if (a.getRawBits() > b.getRawBits())
        return a;
    return b;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
    if (a.getRawBits() > b.getRawBits())
        return a;
    return b;
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
    if (a.getRawBits() < b.getRawBits())
        return a;
    return b;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
    if (a.getRawBits() < b.getRawBits())
        return a;
    return b;
}