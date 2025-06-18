/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirwatan <hirwatan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 11:08:54 by hirwatan          #+#    #+#             */
/*   Updated: 2025/06/18 12:35:28 by hirwatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

std::vector<std::string> RPN::split(char *str)
{
    std::string argv = static_cast<std::string>(str);
    std::string delimiter = " ";
    std::vector<std::string> tokens;
    std::string token;
    size_t pos = 0;
    while ((pos = argv.find(delimiter)) != std::string::npos)
    {
        token = argv.substr(0, pos);
        tokens.push_back(token);
        argv.erase(0, pos + delimiter.length());
    }
    tokens.push_back(argv);
    return tokens;
}

std::ostream &operator<<(std::ostream &o, const RPN &r)
{
    std::vector<std::string> str = r.getstr();
    for (size_t i = 0; i < str.size(); i++)
    {
        o << str[i];
        if (i < str.size() - 1)
            o << std::endl;
    }
    return o;
}