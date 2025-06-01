/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirwatan <hirwatan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 17:01:57 by hirwatan          #+#    #+#             */
/*   Updated: 2025/06/01 12:59:31 by hirwatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int main(void)
{
    std::cout << "\n===== ClapTrap Test =====\n"
              << std::endl;
    ClapTrap clap("Clapper");
    clap.attack("Target");
    clap.takeDamage(5);
    clap.beRepaired(3);

    std::cout << "\n===== ScavTrap Test =====\n"
              << std::endl;
    ScavTrap scav("Guardian");
    scav.attack("Enemy"); // ScavTrapのオーバーライドされたattack
    scav.takeDamage(30);
    scav.beRepaired(20);
    scav.guardGate(); // ScavTrap独自の機能

    std::cout << "\n===== copy constructor test =====\n"
              << std::endl;
    ScavTrap scavCopy(scav);
    scavCopy.attack("Clone target");
    scavCopy.guardGate();

    std::cout << "\n===== 継承 Test =====\n"
              << std::endl; // ScavTrapは高いHP(100)を持っているので、多くのダメージに耐えられる
    for (int i = 0; i < 5; i++)
    {
        scav.takeDamage(15);
        scav.beRepaired(5);
    }

    std::cout << "\n===== energy Test =====\n"
              << std::endl;// ScavTrapはエネルギーポイントを多く(50)持っているが、やがて使い切る
    for (int i = 0; i < 50; i++)
    {
        std::cout << "action " << (i + 1) << ": ";
        if (i % 2 == 0)
        {
            scavCopy.attack("target");
        }
        else
        {
            scavCopy.beRepaired(1);
        }
    }

    return 0;
}