/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirwatan <hirwatan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 17:01:57 by hirwatan          #+#    #+#             */
/*   Updated: 2025/06/01 12:19:15 by hirwatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap robot1("Robot1");
    ClapTrap robot2("Robot2");
    ClapTrap robot3(robot1);

    std::cout << "\n===== Action Test =====\n"
              << std::endl;
    robot1.attack("Robot2");
    robot2.takeDamage(5);
    robot2.beRepaired(3);

    std::cout << "\n===== Energy Test =====\n"
              << std::endl;
    for (int i = 0; i < 12; i++)
    {
        std::cout << "Attack " << (i + 1) << ": ";
        robot3.attack("dummy");
    }

    std::cout << "\n===== Damage Endurance Test =====\n"
              << std::endl;
    ClapTrap robot4("Tank");
    robot4.takeDamage(5);
    robot4.beRepaired(2);
    robot4.takeDamage(10);   // HPが0になる
    robot4.beRepaired(5);    // HPが0なので修復できないはず
    robot4.attack("target"); // HPが0なので攻撃できないはず

    return 0;
}