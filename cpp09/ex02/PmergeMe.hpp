/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirwatan <hirwatan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 18:34:37 by hirwatan          #+#    #+#             */
/*   Updated: 2025/06/19 12:07:36 by hirwatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <list>

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

class PmergeMe
{
private:
public:
    PmergeMe();
    ~PmergeMe();

    std::vector<int> convert_vector(int argc,char *argv[]);
    std::list<int> convert_list(int argc,char *argv[]);

    void Mergeinsertionsort(std::vector<int> values);
    void Mergeinsertionsort(std::list<int> values);
};

std::ostream &operator<<(std::ostream &o,std::vector<int> &v);
std::ostream &operator<<(std::ostream &o,std::list<int> &l);


#endif