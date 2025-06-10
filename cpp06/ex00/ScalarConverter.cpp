/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirwatan <hirwatan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 11:38:37 by hirwatan          #+#    #+#             */
/*   Updated: 2025/06/10 18:46:51 by hirwatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirwatan <hirwatan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 16:26:52 by hirwatan          #+#    #+#             */
/*   Updated: 2025/06/09 16:41:09 by hirwatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <limits>
#include <limits.h>
#include <cstdlib>
#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}
ScalarConverter::~ScalarConverter() {};
ScalarConverter::ScalarConverter(const ScalarConverter &other) { (void)other; }
ScalarConverter &ScalarConverter::operator=(const ScalarConverter &other)
{
    (void)other;
    return (*this);
}

ScalarConverter::LiteralType ScalarConverter::identifyType(const std::string &literal)
{
    if (literal.empty())
        return INVALID;

    if (literal == "nan" || literal == "+inf" || literal == "-inf")
        return DOUBLE;
    if (literal == "nanf" || literal == "+inff" || literal == "-inff")
        return FLOAT;

    if (literal.length() == 1 && !std::isdigit(literal[0]))
        return CHAR;

    bool hasDecimal = false;
    bool isFloat = false;
    bool isMinus = false;
    size_t start = 0;

    if (literal[0] == '-' || literal[0] == '+')
    {
        start = 1;
        if (literal[0] == '-')
            isMinus = true;
    }

    for (size_t i = start; i < literal.length(); i++)
    {
        if (literal[i] == '.')
        {
            if (hasDecimal)
                return INVALID;
            hasDecimal = true;
        }
        else if (literal[i] == 'f' && i == literal.length() - 1)
        {
            isFloat = true;
        }
        else if (!std::isdigit(literal[i]))
        {
            return INVALID;
        }
    }

    if (isFloat)
        return FLOAT;
    else if (hasDecimal)
        return DOUBLE;
    else
        return INT;
}

void ScalarConverter::convertChar(const std::string &literal)
{
    try
    {
        if (identifyType(literal) != CHAR)
        {
            int value = std::atoi(literal.c_str());
            if (value < 0 || value > 127)
                std::cout << "char: impossible" << std::endl;
            else if (value < 32 || value > 126)
                std::cout << "char: non displayable" << std::endl;
            else
                std::cout << "char '" << static_cast<char>(value) << "'" << std::endl;
        }
        else
        {
            char c = literal[0];
            if (c < 32 || c > 126)
                std::cout << "char: non displayable" << std::endl;
            else
                std::cout << "char '" << c << "'" << std::endl;
        }
    }
    catch (...)
    {
        std::cout << "char: impossible" << std::endl;
    }
}

void ScalarConverter::convertInt(const std::string &literal)
{
    try
    {
        if (identifyType(literal) == CHAR)
        {
            std::cout << "int:" << static_cast<int>(literal[0]) << std::endl;
            return;
        }
        long value = std::atol(literal.c_str());
        if (value > INT_MAX || value < INT_MIN)
            std::cout << "int: impossible" << std::endl;
        else
            std::cout << "int: " << static_cast<int>(value) << std::endl;
    }
    catch (...)
    {
        std::cout << "Int: impossible" << std::endl;
    }
}

void ScalarConverter::convertFloat(const std::string &literal)
{
    try
    {
        float value;
        if (identifyType(literal) == CHAR)
            value = static_cast<float>(literal[0]);
        else
            value = std::atof(literal.c_str());
        std::cout << "float: " << value;

        if (static_cast<int>(value) == value)
            std::cout << ".0";
        std::cout << "f" << std::endl;
    }
    catch (...)
    {
        std::cout << "float: impossible" << std::endl;
    }
}
void ScalarConverter::convertDouble(const std::string &literal)
{
    try
    {
        double value;
        if (identifyType(literal) == CHAR)
            value = static_cast<double>(literal[0]);
        else
            value = std::atof(literal.c_str());
        std::cout << "double: " << value;

        if (static_cast<int>(value) == value)
            std::cout << ".0" << std::endl;
    }
    catch (...)
    {
        std::cout << "double: impossible" << std::endl;
    }
}
void ScalarConverter::convert(const std::string &literal)
{
    if (literal.empty())
    {
        std::cout << "Error: Empty input" << std::endl;
        return;
    }

    if (literal == "nan" || literal == "+inf" || literal == "-inf" ||
        literal == "nanf" || literal == "+inff" || literal == "-inff")
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;

        if (literal == "nan" || literal == "nanf")
        {
            std::cout << "float: nanf" << std::endl;
            std::cout << "double: nan" << std::endl;
        }
        else if (literal == "+inf" || literal == "+inff")
        {
            std::cout << "float: +inff" << std::endl;
            std::cout << "double: +inf" << std::endl;
        }
        else
        {
            std::cout << "float: -inff" << std::endl;
            std::cout << "double: -inf" << std::endl;
        }
        return;
    }

    convertChar(literal);
    convertInt(literal);
    convertFloat(literal);
    convertDouble(literal);
}