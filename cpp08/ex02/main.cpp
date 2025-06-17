/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirwatan <hirwatan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 19:13:36 by hirwatan          #+#    #+#             */
/*   Updated: 2025/06/17 11:46:59 by hirwatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <vector>
#include <iostream>
#include <list>

void BASIC_TEST(void)
{
    std::cout << "===== BASIC STACK OPERATIONS =====" << std::endl;
    
    MutantStack<int> mstack;
    // MutantStack<int , std::vector<int>>; //毎回書かなければいけない
    mstack.push(5);
    mstack.push(17);
    
    std::cout << "Top element: " << mstack.top() << std::endl;
    std::cout << "Stack size: " << mstack.size() << std::endl;
    
    mstack.pop();
    std::cout << "After pop - Top element: " << mstack.top() << std::endl;
    std::cout << "After pop - Stack size: " << mstack.size() << std::endl;
    
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    
    std::cout << "Final stack size: " << mstack.size() << std::endl;
}

void ITERATOR_TEST(void)
{
    std::cout << "\n===== ITERATOR OPERATIONS =====" << std::endl;
    
    MutantStack<int> mstack;
    for (int i = 0; i < 5; i++)
        mstack.push(i * 10);
    
    std::cout << "Stack elements using iterator: ";
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    
    while (it != ite)
    {
        std::cout << *it << " ";
        ++it;
    }
    std::cout << std::endl;
    
    std::cout << "Testing iterator movement:" << std::endl;
    it = mstack.begin();
    std::cout << "First element: " << *it << std::endl;
    ++it;
    std::cout << "After ++it: " << *it << std::endl;
    --it;
    std::cout << "After --it: " << *it << std::endl;
}

void COMPARE_WITH_LIST_TEST(void)
{
    std::cout << "\n===== COMPARISON WITH std::list =====" << std::endl;
    
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << "MutantStack top: " << mstack.top() << std::endl;
    mstack.pop();
    std::cout << "MutantStack size: " << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    
    std::cout << "MutantStack elements: ";
    MutantStack<int>::iterator it_m = mstack.begin();
    MutantStack<int>::iterator ite_m = mstack.end();
    while (it_m != ite_m)
    {
        std::cout << *it_m << " ";
        ++it_m;
    }
    std::cout << std::endl;
    
    std::list<int> lst;
    lst.push_back(5);
    lst.push_back(17);
    std::cout << "List back: " << lst.back() << std::endl;
    lst.pop_back();
    std::cout << "List size: " << lst.size() << std::endl;
    lst.push_back(3);
    lst.push_back(5);
    lst.push_back(737);
    
    std::cout << "List elements: ";
    std::list<int>::iterator it_l = lst.begin();
    std::list<int>::iterator ite_l = lst.end();
    while (it_l != ite_l)
    {
        std::cout << *it_l << " ";
        ++it_l;
    }
    std::cout << std::endl;
}

void COPY_TEST(void)
{
    std::cout << "\n===== COPY OPERATIONS =====" << std::endl;
    
    MutantStack<int> mstack;
    for (int i = 0; i < 5; i++)
        mstack.push(i);

    MutantStack<int> mstack_copy(mstack);
    std::cout << "Original stack size: " << mstack.size() << std::endl;
    std::cout << "Copied stack size: " << mstack_copy.size() << std::endl;

    mstack.push(100);
    std::cout << "After pushing 100 to original - Original size: " << mstack.size() << std::endl;
    std::cout << "After pushing 100 to original - Copy size: " << mstack_copy.size() << std::endl;
    
    std::stack<int> s(mstack);
    std::cout << "std::stack copy size: " << s.size() << std::endl;
    std::cout << "std::stack copy top: " << s.top() << std::endl;
}

int main(void)
{
    BASIC_TEST();
    ITERATOR_TEST();
    COMPARE_WITH_LIST_TEST();
    COPY_TEST();
    
    return 0;
}


// int main()
// {
//     MutantStack<int> mstack;
//     mstack.push(1);
//     mstack.push(2);
//     std::cout << "===top===" << std::endl;
//     std::cout << mstack.top() << std::endl;
//     mstack.pop();
//     std::cout << "===size===" << std::endl;
//     std::cout << mstack.size() << std::endl;
//     mstack.push(3);
//     mstack.push(4);
//     mstack.push(5);
//     //[...]
//     mstack.push(6);
//     MutantStack<int>::iterator it = mstack.begin();
//     MutantStack<int>::iterator ite = mstack.end();
//     ++it;
//     --it;
//     while (it != ite)
//     {
//         std::cout << *it << std::endl;
//         ++it;
//     }
//     std::stack<int> s(mstack);
//     return 0;
// }