/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirwatan <hirwatan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 17:01:52 by hirwatan          #+#    #+#             */
/*   Updated: 2025/05/29 20:04:54 by hirwatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string str) : _name(str), _Hit_Point(10), _Energy_points(10), _Attack_damage(0)
{
    std::cout << "ClarpTrap " << str << " has been created!" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "ClapTrap destructor called" << std::endl;
}


void ClapTrap::attack(const std::string &target)
{
    std::cout << "ClapTrap" << this->_name << "attacks" << target << "," << "casing" << this->_Attack_damage << "points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
}

void ClapTrap::beRepaired(unsigned int amount)
{
}
