/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirwatan <hirwatan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 15:35:16 by hirwatan          #+#    #+#             */
/*   Updated: 2025/06/03 16:06:20 by hirwatan         ###   ########.fr       */
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
    this->_brain = new Brain();
}

Dog::~Dog(void)
{
    std::cout << this->_type <<CYN " destructor called" NC<< std::endl;
    delete this->_brain;
}

Dog::Dog(const Dog &src) : Animal(src)
{
    std::cout <<CYN "Dog copy constructor called" NC<< std::endl;
    this->_brain = new Brain(*(src._brain)); // ディープコピー
}

Dog &Dog::operator=(const Dog &src)
{
    std::cout <<CYN "Dog copy calles." NC<< std::endl;
    if (this != &src)
    {
        Animal::operator=(src);
        delete this->_brain;
        this->_brain = new Brain(*(src._brain));
    }
    return *this;
}

void Dog::makeSound(void) const
{
    std::cout <<CYN "WAON!" NC<< std::endl;
}