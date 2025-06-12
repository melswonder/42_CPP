/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirwatan <hirwatan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 14:23:23 by hirwatan          #+#    #+#             */
/*   Updated: 2025/06/12 11:58:43 by hirwatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

template <typename T>
T max(T a, T b)
{
    return (a > b) ? a : b;
}

template <typename T>
T min(T a, T b)
{
    return (a < b) ? a : b;
}

template <typename T>
void swap(T &a, T &b)
{
    T tmp = a;
    a = b;
    b = tmp;
}

#endif