/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   humanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirwatan <hirwatan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 14:47:10 by hirwatan          #+#    #+#             */
/*   Updated: 2025/05/26 19:33:31 by hirwatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "humanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
    this->_weapon  = NULL;
}

HumanB::~HumanB(void)
{
}

void HumanB::setWeapon(Weapon& weapon)
{
    this->_weapon = &weapon;
}

void HumanB::attack(void) const
{
    if(this->_weapon != NULL && this->_weapon->getType() != ""){
        std::cout << " attacks with their " << this->_weapon->getType() << std::endl;   
    }else{
        std::cout << " doesn't have a weapon on attack." << std::endl;
    }
}