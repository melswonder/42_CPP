/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirwatan <hirwatan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 19:13:49 by hirwatan          #+#    #+#             */
/*   Updated: 2025/06/13 19:36:02 by hirwatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <stdexcept>
#include <iterator>
#include <iostream>

template <typename T>
void easyfind(T &container, int value)
{
    if (std::find(container.begin(), container.end(), value) != container.end())
        std::cout << "Found" << std::endl;
    else
        std::cout << "Not Found" << std::endl;
}

#endif