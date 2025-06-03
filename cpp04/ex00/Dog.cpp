/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirwatan <hirwatan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 15:35:16 by hirwatan          #+#    #+#             */
/*   Updated: 2025/06/03 15:39:34 by hirwatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include <iostream>
#include <string>

#define NC "\e[0m"
#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define CYN "\e[0;36m"
#define REDB "\e[41m"

Dog::Dog(void) : Animal("Dog")
{
    std::cout << this->_type <<CYN " constructor called" NC<< std::endl;
}

Dog::~Dog(void)
{
    std::cout << this->_type <<CYN " destructor called" NC<< std::endl;
}

void Dog::makeSound(void) const
{
    std::cout <<CYN "WAON!" NC<< std::endl;
}