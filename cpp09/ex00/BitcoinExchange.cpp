/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirwatan <hirwatan@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 19:39:37 by hirwatan          #+#    #+#             */
/*   Updated: 2025/06/16 20:12:41 by hirwatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(const std::string &datavaseFile)
{
    std::ifstream file(datavaseFile.c_str());
    if (!file.is_open())
    {
        std::cout << "Error: could not open file." << std::endl;
        return;
    }

    std::string line;
    std::getline(file, line); // 最初だけ読み飛ばす

    while (std::getline(file, line))
    {
        std::size_t commaPos = line.find(',');
        if (commaPos != std::string::npos)
        {
            std::string date = line.substr(0, commaPos);
            float rate = std::atof(line.substr(commaPos + 1).c_str());
            this->_database[date] = rate;
        }
    }
}

BitcoinExchange::~BitcoinExchange() {}

void BitcoinExchange::print(void)
{
    for (std::map<std::string, float>::iterator it = _database.begin(); it != _database.end(); ++it)
    {
        std::cout << it->first << ":" << it->second << std::endl;
    }
}
// bool BitcoinExchange::isValidDate(const std::string &date) const
// {
//     if (date.length() != 10)
//         return false;
    
//     if (date[4] != '-' || date[7] != '-')
//         return false;
    
//     // 年、月、日の範囲チェックなども追加すべき
//     return true;
// }

// bool BitcoinExchange::isValidValue(const float value) const
// {
//     return value >= 0 && value <= 1000;
// }

// std::string BitcoinExchange::findClosestDate(const std::string &date) const
// {
//     std::map<std::string, float>::const_iterator it = database.upper_bound(date);
//     if (it == database.begin())
//         return it->first;
//     return (--it)->first;
// }

// void BitcoinExchange::processInputFile(const std::string &inputFile)
// {
//     std::ifstream file(inputFile.c_str());
//     if (!file.is_open()) {
//         std::cout << "Error: could not open file." << std::endl;
//         return;
//     }

//     std::string line;
//     std::getline(file, line); // ヘッダー行をスキップ
    
//     while (std::getline(file, line)) {
//         std::size_t pipePos = line.find(" | ");
//         if (pipePos == std::string::npos) {
//             std::cout << "Error: bad input => " << line << std::endl;
//             continue;
//         }
        
//         std::string date = line.substr(0, pipePos);
//         std::string valueStr = line.substr(pipePos + 3);
        
//         if (!isValidDate(date)) {
//             std::cout << "Error: bad input => " << date << std::endl;
//             continue;
//         }
        
//         char* endptr;
//         float value = std::strtof(valueStr.c_str(), &endptr);
        
//         if (*endptr != '\0') {
//             std::cout << "Error: not a number." << std::endl;
//             continue;
//         }
        
//         if (value < 0) {
//             std::cout << "Error: not a positive number." << std::endl;
//             continue;
//         }
        
//         if (!isValidValue(value)) {
//             std::cout << "Error: too large a number." << std::endl;
//             continue;
//         }
        
//         std::string closestDate = date;
//         std::map<std::string, float>::iterator it = database.find(date);
        
//         if (it == database.end()) {
//             // 日付が見つからない場合は最も近い日付を使用
//             if (date < database.begin()->first) {
//                 std::cout << "Error: no bitcoin price available before " << database.begin()->first << std::endl;
//                 continue;
//             }
//             closestDate = findClosestDate(date);
//             it = database.find(closestDate);
//         }
        
//         float result = value * it->second;
//         std::cout << date << " => " << value << " = " << result << std::endl;
//     }
// }