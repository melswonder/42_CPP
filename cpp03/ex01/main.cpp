/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirwatan <hirwatan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 17:01:57 by hirwatan          #+#    #+#             */
/*   Updated: 2025/05/30 19:14:11 by hirwatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int main(void)
{
    ScavTrap human1("human1");
    ScavTrap human2(human1);

    human1.attack("the air");
    human1.takeDamage(10);
    human1.beRepaired(10);
    human1.guardGate();
    human2.beRepaired(100);

    return 0;
}