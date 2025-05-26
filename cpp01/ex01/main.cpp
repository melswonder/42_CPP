/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirwatan <hirwatan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 14:27:18 by hirwatan          #+#    #+#             */
/*   Updated: 2025/05/26 14:11:52 by hirwatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <string>

#define N 10

int main(void)
{
	Zombie *zombies = zombieHorde(N, "hanako");
	for (size_t i = 0; i < N; i++)
	{
		zombies[i].announce();
	}
	
	delete [] zombies;
	return 0;
}