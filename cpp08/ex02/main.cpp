/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirwatan <hirwatan@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 19:13:36 by hirwatan          #+#    #+#             */
/*   Updated: 2025/06/16 10:56:57 by hirwatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <vector>
#include <iostream>

int main()
{
    MutantStack<int> mstack;
    mstack.push(1);
    mstack.push(2);
    std::cout << "===top===" << std::endl;
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << "===size===" << std::endl;
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(4);
    mstack.push(5);
    //[...]
    mstack.push(6);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);
    return 0;
}