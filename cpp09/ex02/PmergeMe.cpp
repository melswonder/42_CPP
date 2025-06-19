/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirwatan <hirwatan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 18:34:43 by hirwatan          #+#    #+#             */
/*   Updated: 2025/06/19 19:15:49 by hirwatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <iostream>
#include <cstring>
#include <cstdlib>
#include <sstream>
#include <stdexcept>

// PmergeMe::PmergeMe() {}
PmergeMe::~PmergeMe() {}

std::vector<int> PmergeMe::convert_vector(int argc, char *argv[])
{
    std::vector<int> ret;

    try
    {
        for (int i = 1; i < argc; i++)
        {
            char *endptr;
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
            char *endptr;
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

// void PmergeMe::Mergeinsertionsort(std::vector<int> values)
// {
//     if (values.size() <= 1)
//         return;
//     std::vector<std::pair<int, int>> pairs;
//     bool hasOdd = (values.size() % 2 != 0);
//     while (values.size() < 0)
//     {
//         if (values[i] < values[i - 1])
//         {
//             tmp.push_back(values[i - 1]);
//             values[i - 1].clear();
//         }
//         else
//         {
//             tmp.push_back(values[i]);
//         }
//         i++;
//         if (values.size() != i)
//             continue;
//         this->Mergeinsertionsort(tmp);
//     }

//     // ペアの形成
//     // 各ペアの大小を調整
//     // 再帰的マージソート
//     // 挿入
//     (void)values;
// }

void PmergeMe::Mergeinsertionsort(std::vector<int> &values)
{
    if (values.size() <= 1)
        return;

    // 1. ペア形成
    std::vector<std::pair<int, int> > pairs;
    bool hasOdd = (values.size() % 2 != 0);
    int oddElement = 0;

    for (size_t i = 0; i < values.size() - hasOdd; i += 2)
    {
        int a = values[i], b = values[i + 1];
        _count++;
        if (a > b)
            std::swap(a, b);
        pairs.push_back(std::make_pair(a, b));
    }

    if (hasOdd)
        oddElement = values[values.size() - 1];

    // 3. 大きい要素だけを抽出
    std::vector<int> largerElements;
    for (size_t i = 0; i < pairs.size(); i++)
        largerElements.push_back(pairs[i].second);

    Mergeinsertionsort(largerElements);

    // 結果の再構築
    values.clear();
    values.push_back(pairs[0].first); // 最小値はこれ

    // 4. 最適な順序で小さい方の要素を挿入
    for (size_t i = 0; i < largerElements.size(); i++)
    {
        values.push_back(largerElements[i]);

        if (i + 1 < pairs.size())
        {
            int element = pairs[i + 1].first;
            std::vector<int>::iterator pos =
                customLowerBound(values.begin(), values.end() - 1, element);
            values.insert(pos, element);
        }
    }

    // 奇数個の場合、最後の要素も挿入
    if (hasOdd)
    {
        std::vector<int>::iterator pos =
            customLowerBound(values.begin(), values.end(), oddElement);
        values.insert(pos, oddElement);
    }
}

void PmergeMe::Mergeinsertionsort(std::list<int> &values)
{
    (void)values;
}

template <typename Iterator>
Iterator PmergeMe::customLowerBound(Iterator first, Iterator last, const int &value)
{
    Iterator it;
    typename std::iterator_traits<Iterator>::difference_type count, step;
    count = std::distance(first, last);

    while (count > 0)
    {
        it = first;
        step = count / 2;
        std::advance(it, step);
        _count++;
        if (*it < value)
        {
            first = ++it;
            count -= step + 1;
        }
        else
        {
            count = step;
        }
    }
    return first;
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