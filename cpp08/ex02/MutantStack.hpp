/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirwatan <hirwatan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 12:13:12 by hirwatan          #+#    #+#             */
/*   Updated: 2025/06/15 19:34:25 by hirwatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK
#define MUTANTSTACK


template <typename T>
class MutantStack
{
    private:
        MutantStack();
    public:
        MutantStack(new (T));
        
        void push(int num);
        void pop(int num);
        void top(int num);
        void size(int num);
}; 

#endif