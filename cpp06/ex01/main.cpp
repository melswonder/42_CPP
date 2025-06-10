/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirwatan <hirwatan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 19:58:18 by hirwatan          #+#    #+#             */
/*   Updated: 2025/06/10 20:16:03 by hirwatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>          // 標準入出力ストリームライブラリをインクルード（コンソール出力に必要）
#include "Data.hpp"          // カスタム定義したDataクラス/構造体の宣言をインクルード
#include "Serializer.hpp" 

int main(void)               // プログラムのエントリーポイント
{
    Data *data = new Data;   // Dataオブジェクトをヒープメモリに動的に確保（メモリアドレスをテストするため）
    data->name = "hirwatan"; // Dataオブジェクトのnameメンバに文字列を代入
    data->age = 42;          // Dataオブジェクトのageメンバに整数値を代入

    std::cout << "Original pointer: " << data << std::endl;  // 元のポインタのアドレスを16進数で表示
    
    uintptr_t serialized = Serializer::serialize(data);      // ポインタをuintptr_t型の整数値に変換（シリアライズ）
    Data *deserialized = Serializer::deserialize(serialized); // 整数値を元のポインタ型に戻す（デシリアライズ）
    
    // デシリアライズしたポインタのアドレスを表示
    std::cout << "Deserialized pointer: " << deserialized << std::endl;
    
    // 変換前後のポインタが等しいかを確認（同じメモリ位置を指していることを検証）
    std::cout << "Are pointers equal? " << (data == deserialized ? "YES" : "NO") << std::endl;
    
    // デシリアライズしたポインタを通してデータメンバにアクセスできることを確認
    std::cout << "Name: " << deserialized->name << std::endl;
    std::cout << "Age: " << deserialized->age << std::endl;

    delete data;             // 動的に確保したメモリを解放（メモリリーク防止）

    return 0;                // プログラムの正常終了を示す
}