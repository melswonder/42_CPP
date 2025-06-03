/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirwatan <hirwatan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 15:21:31 by hirwatan          #+#    #+#             */
/*   Updated: 2025/06/03 16:04:38 by hirwatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Animal.hpp"

#define NC "\e[0m"
#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define CYN "\e[0;36m"
#define REDB "\e[41m"

Animal::Animal(void) : _type("Animal")
{
    std::cout << this->_type <<RED " constructor called" NC<< std::endl;
}

Animal::Animal(std::string type) : _type(type)
{
    std::cout << this->_type <<RED " constructor called" NC<< std::endl;
}

Animal::~Animal(void)
{
    std::cout <<RED "Animal destructor called" NC<< std::endl;
}

Animal::Animal(const Animal &src)
{
    std::cout <<RED "Animal copy constructor called" NC<< std::endl;
    *this = src;
}

Animal& Animal:: operator=(const Animal &rhs)
{
    std::cout <<RED "Animal assignment operator called" NC<< std::endl;
    if(this != &rhs)
        this->_type = rhs._type;
    return *this;
}

void Animal::makeSound(void) const
{
    std::cout <<RED "Animal makeSound called" NC<< std::endl;
}

std::string Animal::getType(void) const
{
    return this->_type;
}