/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirwatan <hirwatan@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 11:06:48 by hirwatan          #+#    #+#             */
/*   Updated: 2025/06/16 20:12:17 by hirwatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <string>
#include <map>
#include <fstream>
#include <iostream>
#include <sstream>
#include <cstdlib>
#include <limits>

class BitcoinExchange
{
private:
    std::map<std::string, float> _database;
    BitcoinExchange();

    bool isValidDate(const std::string &date) const;
    bool isValidValue(const float value) const;
    std::string findClosestDate(const std::string &date) const;
public:
    BitcoinExchange(const std::string &datavaseFile);
    ~BitcoinExchange();
    
    void print(void);
    void processInputFile(const std::string &inputfile);
};


// 2011-01-03 => 3 = 0.9

#endif