/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirwatan <hirwatan@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 17:01:54 by hirwatan          #+#    #+#             */
/*   Updated: 2025/05/30 14:10:18 by hirwatan         ###   ########.fr       */
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
public:
    ClapTrap();
    ClapTrap(std::string& name);
    ClapTrap(const std::string& name);
    ClapTrap(const ClapTrap&);
    ~ClapTrap();
    ClapTrap &operator=(const ClapTrap &rhs);
    void attack(const std::string &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

#endif