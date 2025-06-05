/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirwatan <hirwatan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 12:33:38 by hirwatan          #+#    #+#             */
/*   Updated: 2025/06/05 17:34:47 by hirwatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

#define NC "\e[0m"
#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define CYN "\e[0;36m"
#define REDB "\e[41m"

int main(void)
{
    std::cout << "===== テスト1: 正常なFormの作成と表示 =====" << std::endl;
    try {
        Form form("税務申請書", 100, 50);
        std::cout << form << std::endl;
    } catch (std::exception &e) {
        std::cout <<RED "例外発生: " NC<< e.what() << std::endl;
    }

    std::cout << "\n===== テスト2: グレード範囲外の例外処理 =====" << std::endl;
    try {
        Form invalidForm("無効な書類", 151, 50); 
        std::cout << "この行は表示されないはず" << std::endl;
    } catch (std::exception &e) {
        std::cout <<RED "例外発生: " NC<< e.what() << std::endl;
    }
    
    try {
        Form invalidForm("無効な書類", 100, 0);
        std::cout << "この行は表示されないはず" << std::endl;
    } catch (std::exception &e) {
        std::cout <<RED "例外発生: " NC<< e.what() << std::endl;
    }

    std::cout << "\n===== テスト3: 正常に署名できる場合 =====" << std::endl;
    try {
        Bureaucrat director("部長", 90);
        Form report("業務報告書", 100, 90);
        
        std::cout <<GRN "!!署名前!! " NC<< std::endl;
        std::cout << report << std::endl;
        
        director.signForm(report);
        
        std::cout <<CYN "!!署名後!! " NC<< std::endl;
        std::cout << report << std::endl;
    } catch (std::exception &e) {
        std::cout <<RED "例外発生: " NC<< e.what() << std::endl;
    }

    std::cout << "\n===== テスト4: グレードが低すぎて署名できない場合 =====" << std::endl;
    try {
        Bureaucrat intern("インターン", 120);
        Form contract("機密契約書", 100, 50);
        
        std::cout << intern << std::endl;
        std::cout << contract << std::endl;
        
        intern.signForm(contract);
    } catch (std::exception &e) {
        std::cout <<RED "例外発生: " NC<< e.what() << std::endl;
    }

    std::cout << "\n===== テスト5: 既に署名済みのフォーム =====" << std::endl;
    try {
        Bureaucrat manager("マネージャー", 50);
        Form memo("会議メモ", 100, 90);
        
        manager.signForm(memo); 
        manager.signForm(memo);
    } catch (std::exception &e) {
        std::cout <<RED "例外発生: " NC<< e.what() << std::endl;
    }
    
    return 0;
}