/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirwatan <hirwatan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 17:01:54 by hirwatan          #+#    #+#             */
/*   Updated: 2025/05/29 19:33:33 by hirwatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
private:
    std::string _name;
    int _Hit_Point;
    int _Energy_points;
    int _Attack_damage;
    ClapTrap();
public:
    ClapTrap(std::string str);
    ~ClapTrap();
    ClapTrap(const ClapTrap&);
    ClapTrap &operator=(const ClapTrap &rhs);
    void attack(const std::string &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

#endif