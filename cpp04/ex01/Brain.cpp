/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirwatan <hirwatan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 17:46:07 by hirwatan          #+#    #+#             */
/*   Updated: 2025/06/03 16:05:14 by hirwatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>

#define NC "\e[0m"
#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define CYN "\e[0;36m"
#define REDB "\e[41m"

Brain::Brain(void)
{
    std::cout <<REDB "Brain constructor called" NC<< std::endl;
}

Brain::~Brain(void)
{
    std::cout <<REDB "Brain destructor called" NC<< std::endl;
}

Brain::Brain(const Brain &src)
{
    *this = src;
}

Brain &Brain::operator=(const Brain &src)
{
    std::cout <<REDB "Brain copy called." NC<< std::endl;
    if (this != &src)
    {
        for (int i = 0; i < 100; i++)
        {
            this->_ideas[i] = src._ideas[i];
        }
    }
    return *this;
}
