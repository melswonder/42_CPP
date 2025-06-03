/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirwatan <hirwatan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 15:41:48 by hirwatan          #+#    #+#             */
/*   Updated: 2025/06/03 15:38:56 by hirwatan         ###   ########.fr       */
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
    std::cout << this->_type <<GRN " constructor called" NC<< std::endl;
}

Cat::~Cat(void)
{
    std::cout << this->_type <<GRN " destructor called" << std::endl;
}

void Cat::makeSound(void) const
{
    std::cout <<GRN "Huh!" NC<< std::endl;
}