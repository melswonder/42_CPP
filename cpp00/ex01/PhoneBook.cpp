/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirwatan <hirwatan@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 11:38:10 by hirwatan          #+#    #+#             */
/*   Updated: 2025/05/23 14:29:24 by hirwatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <limits>

void PhoneBook::addContact(void)
{
	static int	i;

	this->_contacts[i % 8].init();
	this->_contacts[i % 8].setindex(i % 8);
	i++;
}

void PhoneBook::printContact(void)
{
	std::cout << "=================PhoneContact=================" << std::endl;
	for (size_t i = 0; i < 8; i++)
	{
		this->_contacts[i].view(i);
	}
	std::cout << std::endl;
}

void PhoneBook::SearchBook(void)
{
	int	i = this->readInput();
	this->_contacts[i].display(i);
}

int PhoneBook::readInput(void)
{
	bool valid = false;
	int input = -1;
	do
	{
		std::cout << "Please input contact index: " << std::flush;
		std::cin >> input;
		if (std::cin.good() && (input >= 0 && input <= 8))
			valid = true;
		else
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
			std::cout << "Invalid index! please re-input" << std::endl;
		}
	} while (!valid);
	return(input);
}