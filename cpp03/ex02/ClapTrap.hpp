/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirwatan <hirwatan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 17:01:54 by hirwatan          #+#    #+#             */
/*   Updated: 2025/06/01 13:01:01 by hirwatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
protected:
    std::string  _name;
    unsigned int _Hit_Point;
    unsigned int _Energy_points;
    unsigned int _Attack_damage;

    ClapTrap();

public:
    ClapTrap(std::string name);
    ~ClapTrap();
    ClapTrap(const ClapTrap &);
    ClapTrap &operator=(const ClapTrap &rhs);

    void attack(const std::string &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

#endif