/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirwatan <hirwatan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 19:13:36 by hirwatan          #+#    #+#             */
/*   Updated: 2025/06/13 19:43:19 by hirwatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>

void TEST_FOUND(void)
{
    std::vector<int> vec;
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    easyfind(vec, 20);
}

void TEST_NOT_FOUND(void)
{
    std::vector<int> vec;
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    easyfind(vec, 50);
}

int main(void)
{
    TEST_FOUND();
    TEST_NOT_FOUND();
    return 0;
}