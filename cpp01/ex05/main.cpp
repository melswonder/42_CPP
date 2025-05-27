/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirwatan <hirwatan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 19:51:00 by hirwatan          #+#    #+#             */
/*   Updated: 2025/05/27 20:28:53 by hirwatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
    std::string input;
    Harl        harl;
    do
    {
        std::cout << "please input level: ";
        std::cin >> input;
        harl.complain(input);
    }while(!input.compare("exit"));
    return (0);
}