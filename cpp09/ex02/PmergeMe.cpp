/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirwatan <hirwatan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 18:34:43 by hirwatan          #+#    #+#             */
/*   Updated: 2025/06/19 12:15:29 by hirwatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <iostream>
#include <cstring>
#include <cstdlib>
#include <sstream>
#include <stdexcept>

PmergeMe::PmergeMe() {}
PmergeMe::~PmergeMe() {}

std::vector<int> PmergeMe::convert_vector(int argc, char *argv[])
{
    std::vector<int> ret;

    try
    {
        for (int i = 1; i < argc; i++)
        {
            char* endptr;
            long result = std::strtol(argv[i], &endptr, 10);

            if (*endptr != '\0')
            {
                throw std::invalid_argument("無効な文字！");
            }
            if (result < 0)
            {
                throw std::invalid_argument("負の数値はむり！");
            }
            ret.push_back(static_cast<int>(result));
        }
    }
    catch (const std::exception &e)
    {
        std::cerr << "変換エラー: " << e.what() << std::endl;
        ret.clear();
    }
    return ret;
}

std::list<int> PmergeMe::convert_list(int argc, char *argv[])
{
    std::list<int> ret;

    try
    {
        for (int i = 1; i < argc; i++)
        {
            char* endptr;
            long result = std::strtol(argv[i], &endptr, 10);

            if (*endptr != '\0')
            {
                throw std::invalid_argument("無効な文字！");
            }
            if (result < 0)
            {
                throw std::invalid_argument("負の数値はむり！");
            }

            ret.push_back(static_cast<int>(result));
        }
    }
    catch (const std::exception &e)
    {
        std::cerr << "変換エラー: " << e.what() << std::endl;
        ret.clear();
    }

    return ret;
}

void PmergeMe::Mergeinsertionsort(std::vector<int> values)
{
    (void)values;
}

void PmergeMe::Mergeinsertionsort(std::list<int> values)
{
    (void)values;
}

std::ostream &operator<<(std::ostream &o, std::vector<int> &v)
{
    for (size_t i = 0; i < v.size(); i++)
    {
        o << v[i];
        if (i < v.size() - 1)
            o << " ";
    }
    return o;
}

std::ostream &operator<<(std::ostream &o, std::list<int> &l)
{
    for (std::list<int>::iterator it = l.begin(); it != l.end(); ++it)
    {
        o << *it;
        std::list<int>::iterator next_it = it;
        ++next_it;
        if (next_it != l.end())
            o << " ";
    }
    return o;
}