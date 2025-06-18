/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirwatan <hirwatan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 11:08:56 by hirwatan          #+#    #+#             */
/*   Updated: 2025/06/18 13:57:13 by hirwatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include <string>
#include <iostream>

#ifndef RPN_HPP
#define RPN_HPP

class RPN
{
private:
    std::vector<std::string> _str;

public:
    RPN() {};
    std::vector<std::string> split(char *str);
    std::vector<std::string> getstr() const;

    void setstr(std::vector<std::string> tokens);
    void calculate(void);
    bool isValidToken(const std::string &token);
};

std::ostream &operator<<(std::ostream &o, const RPN &r);

#endif