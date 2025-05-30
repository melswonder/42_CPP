/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirwatan <hirwatan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 16:02:11 by hirwatan          #+#    #+#             */
/*   Updated: 2025/05/30 18:58:26 by hirwatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    this->_Hit_Point = 100;
    this->_Energy_points = 50;
    this->_Attack_damage = 20;
    std::cout << "!ScavTrap " << this->_name << " constructed." << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "!ScavTrap " << this->_name << " has been destroyed." << std::endl;
}

void ScavTrap::attack(std::string const &target)
{
    if (this->_Energy_points <= 0)
    {
        std::cout << "ScavTrap - " << this->_name << " is out of energy." << std::endl;
        return;
    }
    std::cout << "!ScavTrap " << this->_name
              << " attacks " << target
              << " at range, causing " << this->_Attack_damage
              << " points of damage !" << std::endl;
    --_Energy_points;
}
void ScavTrap::guardGate()
{
    std::cout << "!ScavTrap " << this->_name << " is now in Gate keeper mode." << std::endl;
}
