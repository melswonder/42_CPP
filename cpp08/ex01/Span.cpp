/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirwatan <hirwatan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 11:53:52 by hirwatan          #+#    #+#             */
/*   Updated: 2025/06/15 11:55:14 by hirwatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <vector>
#include <list>

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

void Span::addNumber(std::vector<int>::const_iterator &lhs, std::vector<int>::const_iterator &rhs)
{
    for(size_t i = 0; i < rhs.size(); i++)
    {
        lhs.push_back(rhs[i]);
    }
}
unsigned int Span::longestSpan(void) const
{
    unsigned int tmp = _vector[0];
    for (size_t i = 1; i < _size; i++)
    {
        if (_vector[i] > tmp)
            tmp = _vector[i];
    }
    return (tmp);
}

unsigned int Span::shortestSpan(void) const
{
    unsigned int tmp = _vector[0];
    for (unsigned int i = 1; i < _size; i++)
    {
        if (tmp > _vector[i])
            tmp = _vector[i];
    }
    return (tmp);
}

const std::vector<int> *Span::getVector(void) const
{
    return &_vector;
}