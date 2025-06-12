/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirwatan <hirwatan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 14:23:23 by hirwatan          #+#    #+#             */
/*   Updated: 2025/06/12 12:08:32 by hirwatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T,typename Func>
void iter(T* array, size_t len, Func func )
{
    for (size_t i = 0; i < len; ++i)
        func(array[i]);
}

#endif