/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirwatan <hirwatan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 11:08:56 by hirwatan          #+#    #+#             */
/*   Updated: 2025/06/18 12:36:02 by hirwatan         ###   ########.fr       */
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
    RPN(){};
    std::vector<std::string> split(char *str);
    std::vector<std::string> getstr() const { return this->_str; };
    void setstr(std::vector<std::string> tokens) { this->_str = tokens; };
};

std::ostream &operator<<(std::ostream &o, const RPN &r);

#endif