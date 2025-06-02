/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirwatan <hirwatan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 15:35:16 by hirwatan          #+#    #+#             */
/*   Updated: 2025/06/02 16:17:51 by hirwatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include <iostream>
#include <string>

Dog::Dog(void) : Animal("Dog")
{
    std::cout << this->_type << " constructor called" << std::endl;
    this->_brain = new Brain();
}

Dog::~Dog(void)
{
    std::cout << this->_type << " destructor called" << std::endl;
    delete this->_brain;
}

Dog::Dog(const Dog &src) : Animal(src)
{
    std::cout << "Dog copy constructor called" << std::endl;
    this->_brain = new Brain(*(src._brain)); // ディープコピー
}

Dog &Dog::operator=(const Dog &src)
{
    std::cout << "Dog copy calles." << std::endl;
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
    std::cout << "WAON!" << std::endl;
}