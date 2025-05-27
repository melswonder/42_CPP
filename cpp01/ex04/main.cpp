/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirwatan <hirwatan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 10:59:46 by hirwatan          #+#    #+#             */
/*   Updated: 2025/05/27 19:34:27 by hirwatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"
#include <iostream>
#include <fstream>

int main(int argc, char *argv[])
{
    if (argc != 4)
    {
        std::cout << "Usage: ./Sed_is_for_losers filename s1 s2" << std::endl;
        return 1;
    }

    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    Sed sedReplacer(filename);
    sedReplacer.replace(s1, s2);
    return 0;
}