/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirwatan <hirwatan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 15:41:48 by hirwatan          #+#    #+#             */
/*   Updated: 2025/06/02 16:18:03 by hirwatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include <iostream>
#include <string>

Cat::Cat(void) : Animal("Cat")
{
    std::cout << this->_type << " constructor called" << std::endl;
    this->_brain = new Brain();
}

Cat::~Cat(void)
{
    std::cout << this->_type << " destructor called" << std::endl;
    delete this->_brain;
}

Cat::Cat(const Cat &src): Animal(src)
{
    std::cout << "Cat copy constructor called" << std::endl;
    this->_brain = new Brain(*(src._brain));
}

Cat &Cat::operator=(const Cat &src)
{
    std::cout << "Cat copy calles." << std::endl;
    if (this != &src)
    {
        Animal::operator=(src);
        delete this->_brain;
        this->_brain = new Brain((*src._brain));
    }
    return *this;
}

void Cat::makeSound(void) const
{
    std::cout << "Huh!" << std::endl;
}