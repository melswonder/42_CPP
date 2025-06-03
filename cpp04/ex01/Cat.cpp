/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirwatan <hirwatan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 15:41:48 by hirwatan          #+#    #+#             */
/*   Updated: 2025/06/03 16:17:02 by hirwatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include <iostream>
#include <string>

#define NC "\e[0m"
#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define CYN "\e[0;36m"
#define REDB "\e[41m"

Cat::Cat(void) : Animal("Cat")
{
    std::cout << this->_type << GRN " constructor called" NC << std::endl;
    this->_brain = new Brain();
}

Cat::~Cat(void)
{
    std::cout << this->_type << GRN " destructor called" NC << std::endl;
    delete this->_brain;
}

Cat::Cat(const Cat &src) : Animal(src)
{
    std::cout << GRN "Cat copy constructor called" NC << std::endl;
    this->_brain = new Brain(*(src._brain));
}

Cat &Cat::operator=(const Cat &src)
{
    std::cout << GRN "Cat copy calles." NC << std::endl;
    if (this != &src)
    {
        Animal::operator=(src);
        delete this->_brain;
        this->_brain = new Brain(*(src._brain));
    }
    return *this;
}

void Cat::makeSound(void) const
{
    std::cout << GRN "Huh!" NC << std::endl;
}