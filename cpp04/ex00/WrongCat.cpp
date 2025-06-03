/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirwatan <hirwatan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 16:14:02 by hirwatan          #+#    #+#             */
/*   Updated: 2025/06/03 15:45:06 by hirwatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include <iostream>
#include <string>

#define NC "\e[0m"
#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define CYN "\e[0;36m"
#define REDB "\e[41m"

WrongCat::WrongCat(void) : WrongAnimal("WrongCat")
{
    std::cout << this->_type <<REDB " constructor called" NC<< std::endl;
}

WrongCat::~WrongCat(void)
{
    std::cout << this->_type <<REDB " destructor called" NC<< std::endl;
}

void WrongCat::makeSound(void) const
{
    std::cout <<REDB "grrrrrrrrrr MEW!!!!!!!" NC<< std::endl;
}