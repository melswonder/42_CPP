/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirwatan <hirwatan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 17:01:57 by hirwatan          #+#    #+#             */
/*   Updated: 2025/06/01 13:20:39 by hirwatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
    std::cout << "\n===== 全ロボットタイプの作成 =====\n" << std::endl;
    ClapTrap clap("C1-Basic");
    ScavTrap scav("S2-Guard");
    FragTrap frag("F3-Elite");
    
    std::cout << "\n===== 基本アクション比較 =====\n" << std::endl;
    clap.attack("Target");   // 基本攻撃力: 0
    scav.attack("Target");   // 攻撃力: 20
    frag.attack("Target");   // 攻撃力: 30 (FragTrapが実装されていれば)
    
    std::cout << "\n===== 特殊能力テスト =====\n" << std::endl;
    scav.guardGate();         // ScavTrap特有の能力
    frag.highFivesGuys();     // FragTrap特有の能力
    
    std::cout << "\n===== ダメージ耐性比較 =====\n" << std::endl;
    clap.takeDamage(8);      // HP: 10 - 生き残る
    clap.beRepaired(5);      // HP回復
    clap.takeDamage(15);     // HP: 0 - 倒れる
    
    scav.takeDamage(50);     // HP: 100 - まだ生きている
    scav.beRepaired(20);     // HP回復
    scav.takeDamage(80);     // HP減少
    
    frag.takeDamage(50);     // HP: 100 - まだ生きている
    frag.beRepaired(30);     // HP回復
    frag.highFivesGuys();    // まだ動作可能
    frag.takeDamage(100);    // HPが0になる可能性
    frag.highFivesGuys();    // HPが0の場合は機能しない
    
    return 0;
}