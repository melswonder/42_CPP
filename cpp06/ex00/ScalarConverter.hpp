/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirwatan <hirwatan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 16:26:52 by hirwatan          #+#    #+#             */
/*   Updated: 2025/06/10 20:05:30 by hirwatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP


class ScalarConverter
{
private:
    ScalarConverter();
    ScalarConverter(const ScalarConverter &other);
    ScalarConverter &operator=(const ScalarConverter &other);
    ~ScalarConverter();

    enum LiteralType {
        CHAR,
        INT,
        FLOAT,
        DOUBLE,
        INVALID
    };

    static LiteralType identifyType(const std::string &literal);
    static void convertChar(const std::string &literal);
    static void convertInt(const std::string &literal);
    static void convertFloat(const std::string &literal);
    static void convertDouble(const std::string &literal);

public:
    static void convert(const std::string &literal);
};

#endif