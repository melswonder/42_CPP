/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirwatan <hirwatan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 11:08:58 by hirwatan          #+#    #+#             */
/*   Updated: 2025/06/18 18:36:36 by hirwatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

void NOMAL_TEST(char *argv[])
{
    RPN rpn;
    std::vector<std::string> tokens;
    tokens = rpn.split(argv[1]);
    rpn.setstr(tokens);
    // std::cout << rpn << std::endl;

    rpn.calculate();
}

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        std::cout << "invalid argment" << std::endl;
        return 1;
    }
    NOMAL_TEST(argv);
}