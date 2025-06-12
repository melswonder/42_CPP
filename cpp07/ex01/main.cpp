/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirwatan <hirwatan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 14:23:43 by hirwatan          #+#    #+#             */
/*   Updated: 2025/06/12 12:18:13 by hirwatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "iter.hpp"

void argupper(std::string &str)
{
    for (size_t i = 0; i < str.length(); i++)
        str[i] = std::toupper(str[i]);
}

int main(void)
{
    std::string dict[] = {"apple", "banana", "dog"};

    std::cout << "\033[3;43;30m---変更前---\033[0m\t\t" << std::endl;
    for (int i = 0; i < 3; i++)
        std::cout << i << ": " << dict[i] << std::endl;

    iter(dict, 3, argupper);

    std::cout << "\033[3;42;30m---変更後---\033[0m\t\t" << std::endl;
    for (int i = 0; i < 3; i++)
        std::cout << i << ": " << dict[i] << std::endl;
    return 0;
}