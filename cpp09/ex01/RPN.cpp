/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirwatan <hirwatan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 11:08:54 by hirwatan          #+#    #+#             */
/*   Updated: 2025/06/19 18:34:22 by hirwatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"
#include <vector>
#include <stack>
#include <string>
#include <iostream>
#include <cstdlib>

std::vector<std::string> RPN::split(char *str) 
{
    std::string input = str;
    std::vector<std::string> tokens;
    std::string current;
    
    for (size_t i = 0; i < input.length(); i++) {
        if (input[i] == ' ') {
            if (!current.empty()) {
                tokens.push_back(current);
                current.clear();
            }
        } else {
            current += input[i];
        }
    }
    
    if (!current.empty()) {
        tokens.push_back(current);
    }
    
    return tokens;
}

void RPN::calculate(void)
{
    std::stack<float> stack;
    
    for (std::vector<std::string>::iterator it = _str.begin(); it != _str.end(); ++it)
    {
        std::string token = *it;
        if (token.empty())
            continue;
        if (isdigit(token[0]) || (token.size() > 1 && token[0] == '-' && isdigit(token[1])))
        {
            stack.push(std::atof(token.c_str()));
        }
        else if (token == "+" || token == "-" || token == "*" || token == "/")
        {
            if (stack.size() < 2)
            {
                std::cerr << "Error: insufficient operands for operation" << std::endl;
                return;
            }
            float rhs = stack.top();
            stack.pop();
            float lhs = stack.top();
            stack.pop();
            if (token == "+")
                stack.push(lhs + rhs);
            else if (token == "-")
                stack.push(lhs - rhs);
            else if (token == "*")
                stack.push(lhs * rhs);
            else if (token == "/")
            {
                if (rhs == 0)
                {
                    std::cerr << "Error: division by zero" << std::endl;
                    return;
                }
                stack.push(lhs / rhs);
            }
        }
        else
        {
            std::cerr << "Error: invalid token '" << token << "'" << std::endl;
            return;
        }
    }
    if (stack.size() != 1)
    {
        std::cerr << "Error: invalid RPN expression" << std::endl;
        return;
    }
    std::cout << stack.top() << std::endl;
}

bool RPN::isValidToken(const std::string &token)
{
    if (token.size() == 1 && isdigit(token[0]))
        return true;
    if (token.size() == 1 && (token[0] == '+' || token[0] == '-' ||
                              token[0] == '*' || token[0] == '/'))
        return true;

    return false;
}

std::vector<std::string> RPN::getstr() const
{
    return this->_str;
}

void RPN::setstr(std::vector<std::string> tokens)
{
    this->_str = tokens;
}

std::ostream &operator<<(std::ostream &o, const RPN &r)
{
    std::vector<std::string> str = r.getstr();
    o << "[";
    for (size_t i = 0; i < str.size(); i++)
    {
        o << str[i];
        if (i < str.size() - 1)
            o << ",";
    }
    o << "]";
    return o;
}