/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirwatan <hirwatan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 11:53:52 by hirwatan          #+#    #+#             */
/*   Updated: 2025/06/15 16:53:19 by hirwatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <limits.h>

Span::Span() : _size(0) {}
Span::Span(unsigned int N) : _size(N) {}
Span::Span(const Span &other) : _vector(other._vector), _size(other._size) {}
Span::~Span(void) {}

Span &Span::operator=(const Span &other)
{
    if (this != &other)
    {
        _vector = other._vector;
        _size = other._size;
    }
    return (*this);
}

void Span::addNumber(int num)
{
    if (_vector.size() >= _size)
        throw std::runtime_error("Span is full");
    _vector.push_back(num);
}

void Span::addNumber(std::vector<int>::const_iterator begin, std::vector<int>::const_iterator end)
{
    size_t distance = std::distance(begin, end);
    if (_vector.size() + distance > _size)
        throw std::runtime_error("Cannnot add more elements than capacity");
    _vector.insert(_vector.end(), begin, end);
}
unsigned int Span::longestSpan(void) const
{
    if (_vector.size() < 2)
        throw std::runtime_error("Need at least 2 elements to find span");

    int min = *std::min_element(_vector.begin(), _vector.end());
    int max = *std::max_element(_vector.begin(), _vector.end());
    return max - min;
}

unsigned int Span::shortestSpan(void) const
{
    if (_vector.size() < 2)
        throw std::runtime_error("Need at least 2 elements to find span");

    std::vector<int> sorted = _vector;
    std::sort(sorted.begin(), sorted.end());

    unsigned int minSpan = UINT_MAX;
    for (size_t i = 1; i < sorted.size(); i++)
    {
        unsigned int span = sorted[i] - sorted[i - 1];
        if (span < minSpan)
            minSpan = span;
    }
    return minSpan;
}

const std::vector<int> *Span::getVector(void) const
{
    return &_vector;
}

std::ostream &operator<<(std::ostream &o, const Span &s)
{
    const std::vector<int> *vec = s.getVector();
    o << "[ ";
    for (std::vector<int>::const_iterator it = vec->begin(); it != vec->end(); ++it)
    {
        o << *it;
        if (it + 1 != vec->end())
            o << ", ";
    }
    o << " ]";

    return o;
}