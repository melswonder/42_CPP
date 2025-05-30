/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirwatan <hirwatan@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 17:01:52 by hirwatan          #+#    #+#             */
/*   Updated: 2025/05/30 13:47:55 by hirwatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string& name)
: _name(name), _Hit_Point(10), _Energy_points(10), _Attack_damage(0)
{
    std::cout << "ClapTrap " << _name << " has been created!" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << _name << " has been destroyed." << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if (_Hit_Point <= 0 || _Energy_points <= 0)
    {
        std::cout << _name << ": insufficient resources!" << std::endl;
        return;
    }
    --_Energy_points;
    std::cout << "ClapTrap " << _name << " attacks " << target
              << ", causing " << _Attack_damage << " points of damage!"
              << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (_Hit_Point <= 0)
        return;
    _Hit_Point = (_Hit_Point > static_cast<int>(amount)) ? _Hit_Point - amount : 0;
    std::cout << "ClapTrap " << _name << " takes " << amount
              << " points of damage! Current HP: " << _Hit_Point << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (_Hit_Point <= 0 || _Energy_points <= 0)
        return;
    --_Energy_points;
    _Hit_Point += amount;
    std::cout << "ClapTrap " << _name << " repairs " << amount
              << " points! Current HP: " << _Hit_Point << std::endl;
}
