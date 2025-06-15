/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirwatan <hirwatan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 19:13:49 by hirwatan          #+#    #+#             */
/*   Updated: 2025/06/15 11:53:12 by hirwatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <exception>

class Span
{
private:
    std::vector<int> _vector;
    unsigned int _size;

    Span();

public:
    Span(unsigned int N);
    Span(const Span &);
    ~Span();

    Span &operator=(const Span &);
    void addNumber(int num);
    void addNumber(std::vector<int>::const_iterator &lhs, std::vector<int>::const_iterator &rhs);
    unsigned int longestSpan(void) const;
    unsigned int shortestSpan(void) const;

    const std::vector<int> *getVector(void) const;
};

std::ostream &operator<<(std::ostream &, const Span &);

#endif