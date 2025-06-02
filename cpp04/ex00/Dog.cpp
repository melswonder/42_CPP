/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirwatan <hirwatan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 15:35:16 by hirwatan          #+#    #+#             */
/*   Updated: 2025/06/01 15:41:43 by hirwatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include <iostream>
#include <string>

Dog::Dog(void) : Animal("Dog")
{
    std::cout << this->_type << " constructor called" << std::endl;
}

Dog::~Dog(void)
{
    std::cout << this->_type << " destructor called" << std::endl;
}

void Dog::makeSound(void) const
{
    std::cout << "WAON!" << std::endl;
}