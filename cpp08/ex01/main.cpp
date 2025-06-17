/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirwatan <hirwatan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 19:13:36 by hirwatan          #+#    #+#             */
/*   Updated: 2025/06/17 10:39:58 by hirwatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <vector>

void BASIC_TEST(void)
{
    std::cout << "=====basic test=====" << std::endl;
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);

    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    
    std::cout << "Span内容 :" << sp << std::endl;
}

void OVERE_TEST(void)
{
    std::cout << "=====overe test=====" << std::endl;
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);

    try{
        std::cout << "容量を超えて追加します..." << std::endl;
        sp.addNumber(1);
        std::cout << "例外をキャッチできませんでした..." << std::endl;
    }catch(const std::exception &e){
        std::cout << "例外をキャッチしました..." << std::endl;
    }
}

void COPY_TEST(void)
{
    std::cout << "=====meny test=====" << std::endl;
    const int COUNT = 10000;
    Span largeSpan(COUNT);
    
    std::vector<int> largeSource;
    for (int i = 0; i < COUNT; i++)
        largeSource.push_back(i);
    largeSpan.addNumber(largeSource.begin(),largeSource.end());
    std::cout << "10,000要素の追加成功" << std::endl;
    std::cout << "最短スパン: " << largeSpan.shortestSpan() << std::endl;
    std::cout << "最長スパン: " << largeSpan.longestSpan() << std::endl;
    // std::cout << largeSpan << std::endl;
}


int main(void)
{
    BASIC_TEST();
    OVERE_TEST();
    COPY_TEST();
}