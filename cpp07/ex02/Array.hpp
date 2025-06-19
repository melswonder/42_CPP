/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirwatan <hirwatan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 12:23:07 by hirwatan          #+#    #+#             */
/*   Updated: 2025/06/12 15:41:51 by hirwatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <exception>

template <typename T>
class Array
{
private:
    T *_elements;
    unsigned int _size;

public:
    Array() : _elements(NULL), _size(0) {}
    ~Array() { delete[] _elements; }
    Array(unsigned int n) : _elements(new T[n]()), _size(n) {}
    Array(const Array &other) : _elements(new T[other._size]), _size(other._size)
    {
        for (unsigned int i = 0; i < _size; ++i)
        {
            _elements[i] = other._elements[i];
        }
    }

    Array &operator=(const Array &other)
    {
        if (this != &other)
        {
            delete[] _elements;
            _size = other._size;
            _elements = new T[_size];
            for (unsigned int i = 0; i < _size; ++i)
            {
                _elements[i] = other._elements[i];
            }
        }
        return *this;
    }

    T &operator[](unsigned int index)
    {
        if (index >= _size)
            throw std::exception();
        return _elements[index];
    }

    const T &operator[](unsigned int index) const
    {
        if (index >= _size)
            throw std::exception();
        return _elements[index];
    }

    unsigned int size() const
    {
        return _size;
    }
};

#endif
