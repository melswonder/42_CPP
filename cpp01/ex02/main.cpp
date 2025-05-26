/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirwatan <hirwatan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 14:13:19 by hirwatan          #+#    #+#             */
/*   Updated: 2025/05/26 14:44:53 by hirwatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void)
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    // str = "hello1";
    // *stringPTR = "hello2";
    // stringREF = "hello3";

    std::cout << &str << ":" << str << std::endl;
    std::cout << stringPTR << ":" << *stringPTR << std::endl;
    std::cout << &stringREF << ":" << stringREF << std::endl;
}