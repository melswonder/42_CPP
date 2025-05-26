/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirwatan <hirwatan@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 14:27:18 by hirwatan          #+#    #+#             */
/*   Updated: 2025/05/25 20:31:15 by hirwatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <string>

int main(void)
{
	std::string name;
	std::cout << "Creating stack Zombie name: " << std::flush;
	std::cin >> name;
	Zombie zombi1(name);
	zombi1.announce();

	std::cout << "Creating heap zombie name: " << std::flush;
	std::cin >> name;
	Zombie *zombi2 = newZombie(name);
	zombi2->announce();
	delete zombi2;

	std::cout << "Creating randomChump() name: " << std::flush;
	std::cin >> name;
	randomChump(name);
	return(0);
}