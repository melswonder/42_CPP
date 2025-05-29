/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirwatan <hirwatan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 17:36:54 by hirwatan          #+#    #+#             */
/*   Updated: 2025/05/29 16:55:36 by hirwatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

// int main(void)
// {
//     Fixed a;
//     Fixed const b(Fixed(5.05f) * Fixed(2));
//     std::cout << a << std::endl;
//     std::cout << ++a << std::endl;
//     std::cout << a << std::endl;
//     std::cout << a++ << std::endl;
//     std::cout << a << std::endl;
//     std::cout << b << std::endl;
//     std::cout << Fixed::max(a, b) << std::endl;
 

//     return 0;
// }

int main(void)
{
    // 既存のテスト
    Fixed a;
    Fixed const b(Fixed(5.05f) * Fixed(2));
    
    // 追加のテスト
    std::cout << "---- 基本算術演算子テスト ----" << std::endl;
    Fixed c(3.14f);
    Fixed d(1.5f);
    
    std::cout << "c + d = " << (c + d) << std::endl; // 加算
    std::cout << "c - d = " << (c - d) << std::endl; // 減算
    std::cout << "c * d = " << (c * d) << std::endl; // 乗算
    std::cout << "c / d = " << (c / d) << std::endl; // 除算
    
    std::cout << "\n---- インクリメント・デクリメント演算子テスト ----" << std::endl;
    std::cout << "前置インクリメント: " << ++a << std::endl;
    std::cout << "後置インクリメント: " << a++ << std::endl;
    std::cout << "インクリメント後: " << a << std::endl;
    std::cout << "前置デクリメント: " << --a << std::endl;
    std::cout << "後置デクリメント: " << a-- << std::endl;
    std::cout << "デクリメント後: " << a << std::endl;
    
    std::cout << "\n---- 静的メンバ関数テスト ----" << std::endl;
    std::cout << "max(c, d): " << Fixed::max(c, d) << std::endl;
    std::cout << "min(c, d): " << Fixed::min(c, d) << std::endl;
    
    return 0;
}