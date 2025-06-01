/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirwatan <hirwatan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 19:41:57 by hirwatan          #+#    #+#             */
/*   Updated: 2025/06/01 13:20:17 by hirwatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    this->_Hit_Point = 100;
    this->_Energy_points = 100;
    this->_Attack_damage = 30;
    std::cout << "[ FlagTrap ]" << this->_name << " has been created!" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "[ FragTrap ]" << this->_name << " has been destroyed." << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    if (this->_Energy_points <= 0)
    {
        std::cout << "[ FragTrap ]" << this->_name << ": insufficient resources!" << std::endl;
        return;
    }
    std::cout << "[ FragTrap ]" << this->_name << " high fives everybody." << std::endl;
    this->_Energy_points -= 1;
}