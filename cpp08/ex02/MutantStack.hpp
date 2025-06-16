/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirwatan <hirwatan@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 12:13:12 by hirwatan          #+#    #+#             */
/*   Updated: 2025/06/16 11:00:17 by hirwatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <deque>

template <typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
public:
    typedef typename Container::iterator iterator;
    typedef typename Container::const_iterator const_iterator;

    MutantStack() : std::stack<T, Container>() {}
    MutantStack(const MutantStack &src) : std::stack<T, Container>(src) {}
    ~MutantStack() {}

    MutantStack &operator=(const MutantStack &rhs)
    {
        if (this != &rhs)
            std::stack<T, Container>::operator=(rhs);
        return *this;
    }

    iterator begin() { return this->c.begin(); }
    iterator end() { return this->c.end(); }
    const_iterator begin() const { return this->c.begin(); }
    const_iterator end() const { return this->c.end(); }
};
#endif