/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirwatan <hirwatan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 19:58:18 by hirwatan          #+#    #+#             */
/*   Updated: 2025/06/11 13:32:59 by hirwatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Data.hpp"
#include "Serializer.hpp"

#define NC "\e[0m"
#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define CYN "\e[0;36m"
#define REDB "\e[41m"

int main(void)
{
    Data *data = new Data;
    data->name = "hirwatan";
    data->age = 42;

    std::cout <<RED "Original pointer: " NC<< data << std::endl;

    uintptr_t serialized = Serializer::serialize(data);       // (シリアライズ）
    // serialized++;
    Data *deserialized = Serializer::deserialize(serialized); // (デシリアライズ）

    std::cout <<CYN "Deserialized pointer: " NC<< deserialized << std::endl;


    std::cout << "Are pointers equal? " << (data == deserialized ? "YES" : "NO") << std::endl;

    std::cout << "Name: " << deserialized->name << std::endl;
    std::cout << "Age: " << deserialized->age << std::endl;

    delete data;
    return 0;
}