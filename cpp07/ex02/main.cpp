/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirwatan <hirwatan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 12:23:07 by hirwatan          #+#    #+#             */
/*   Updated: 2025/06/12 15:49:37 by hirwatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "Array.hpp"

#define SIZE 10

void testIntArray()
{
    std::cout << "\n===== INT ARRAY TEST =====\n" << std::endl;
    
    // デフォルトコンストラクタのテスト
    Array<int> emptyArray;
    std::cout << "Empty array size: " << emptyArray.size() << std::endl;
    
    // サイズ付きコンストラクタのテスト
    Array<int> intArray(SIZE);
    std::cout << "Int array size: " << intArray.size() << std::endl;
    
    for (unsigned int i = 0; i < intArray.size(); i++)
        intArray[i] = i * 2;
    
    std::cout << "Int array values: ";
    for (unsigned int i = 0; i < intArray.size(); i++)
        std::cout << intArray[i] << " ";
    std::cout << std::endl;
    
    // コピーコンストラクタのテスト
    Array<int> copiedArray(intArray);
    std::cout << "Copied array size: " << copiedArray.size() << std::endl;
    
    intArray[0] = 999;
    
    //シャローコピーじゃないから　値が違う
    std::cout << "Original array after modification: " << intArray[0] << std::endl;
    std::cout << "Copied array (should be unchanged): " << copiedArray[0] << std::endl;
    
    // 代入演算子のテスト
    Array<int> assignedArray;
    assignedArray = intArray;
    std::cout << "Assigned array size: " << assignedArray.size() << std::endl;
    std::cout << "Assigned array value: " << assignedArray[0] << std::endl;
    
    // 例外処理のテスト
    try {
        std::cout << "Accessing valid index: " << intArray[5] << std::endl;
        std::cout << "Accessing invalid index: " << intArray[SIZE] << std::endl;
    } catch(const std::exception& e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }
}

void testStringArray()
{
    std::cout << "\n===== STRING ARRAY TEST =====\n" << std::endl;
    
    Array<std::string> strArray(5);
    strArray[0] = "banana";
    strArray[1] = "apple";
    strArray[2] = "hello";
    strArray[3] = "hoge";
    strArray[4] = "007";
    
    std::cout << "String array values: ";
    for (unsigned int i = 0; i < strArray.size(); i++)
        std::cout << "\"" << strArray[i] << "\" ";
    std::cout << std::endl;
    
    // 負のインデックスアクセスのテスト
    try {
        std::cout << "Trying to access with negative index..." << std::endl;
        strArray[-1] = "Error";
    } catch(const std::exception& e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }
}

void testRandomArray()
{
    std::cout << "\n===== RANDOM VALUES TEST =====\n" << std::endl;
    
    const int MAX_VAL = 20;
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    
    // 両方の配列に同じランダム値を設定
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand() % 100;
        numbers[i] = value;
        mirror[i] = value;
    }
    
    // 値が正しく保存されているかチェック
    bool allMatch = true;
    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            allMatch = false;
            break;
        }
    }
    
    std::cout << "All values match: " << (allMatch ? "YES" : "NO") << std::endl;
    delete[] mirror;
}

int main(void)
{
    testIntArray();
    testStringArray();
    testRandomArray();
    
    return 0;
}