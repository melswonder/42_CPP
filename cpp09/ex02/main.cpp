/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirwatan <hirwatan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 18:34:47 by hirwatan          #+#    #+#             */
/*   Updated: 2025/06/19 19:16:59 by hirwatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <list>

struct timespec start, end;

void TEST_VECTOR(int argc, char *argv[])
{
    std::cout << "=====vector test=====" << std::endl;
    PmergeMe P;
    std::vector<int> vector;
    int elementCount = argc - 1;

    clock_gettime(CLOCK_MONOTONIC, &start);
    vector = P.convert_vector(argc, argv);
    P.Mergeinsertionsort(vector);
    clock_gettime(CLOCK_MONOTONIC, &end);

    double elapsed = (end.tv_sec - start.tv_sec) * 1000000.0 + (end.tv_nsec - start.tv_nsec) / 1000.0;
    std::cout << "Time to process a range of " << elementCount
              << " elements with std::vector<int> : "
              << std::fixed << std::setprecision(5) << elapsed << " μs" << std::endl;
    std::cout << vector << std::endl;
    std::cout << "count =" << P.getcount() << std::endl;
}

void TEST_LIST(int argc, char *argv[])
{
    std::cout << "=====list test=====" << std::endl;
    PmergeMe P;
    std::list<int> list;
    int elementCount = argc - 1;

    clock_gettime(CLOCK_MONOTONIC, &start);
    list = P.convert_list(argc, argv);
    clock_gettime(CLOCK_MONOTONIC, &end);

    double elapsed = (end.tv_sec - start.tv_sec) * 1000000.0 + (end.tv_nsec - start.tv_nsec) / 1000.0;
    std::cout << "Time to process a range of " << elementCount
              << " elements with std::list<int> : "
              << std::fixed << std::setprecision(5) << elapsed << " μs" << std::endl;

    std::cout << list << std::endl;
}

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        std::cout << "invalid argment" << std::endl;
        return 1;
    }
    TEST_VECTOR(argc, argv);
    TEST_LIST(argc, argv);
}