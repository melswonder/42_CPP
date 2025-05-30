/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirwatan <hirwatan@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 17:01:57 by hirwatan          #+#    #+#             */
/*   Updated: 2025/05/30 14:11:23 by hirwatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap human1("human1");
    ClapTrap human2("human2");
    
    std::cout << std::endl;
    human1.attack("human2");
    human2.takeDamage(5);
    human1.attack("human2");
    human2.takeDamage(10);
}