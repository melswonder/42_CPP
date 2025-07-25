/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirwatan <hirwatan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 14:04:24 by hirwatan          #+#    #+#             */
/*   Updated: 2025/06/02 17:38:54 by hirwatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <string>


class Animal
{
protected:
    std::string _type;

public:
    Animal(void);
    Animal(std::string type);
    virtual ~Animal(void);
    Animal(const Animal& src);
    Animal& operator=(const Animal& rhs);

    virtual void makeSound(void) const = 0;
    std::string getType(void) const;
};

#endif