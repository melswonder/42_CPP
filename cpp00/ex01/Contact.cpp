/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirwatan <hirwatan@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 11:38:07 by hirwatan          #+#    #+#             */
/*   Updated: 2025/05/22 19:08:30 by hirwatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <cstdlib>

std::string Contact::_getinput(std::string str) const
{
	std::string input = "";
	bool valid = false;

	do
	{
		std::cout << str << std::flush;
		std::getline(std::cin, input);
		if (std::cin.good() && !input.empty())
			valid = true;
		else
		{
			if (std::cin.eof())
			{
				std::cout << std::endl;
				std::cout << "Force Exit Input!" << std::endl;
				std::exit(1);
			}
			std::cin.clear();
			std::cout << "Invalid input! try again!!" << std::endl;
		}
	} while (!valid);
	return (input);
}

void Contact::init(void)
{
	std::cin.ignore();
	this->_firstName = this->_getinput("please imput you first name: ");
	this->_lastName = this->_getinput("please imput you last name: ");
	this->_nickname = this->_getinput("please imput you nick name: ");
	this->_phonenumber = this->_getinput("please imput you phonenumber: ");
	this->_darkestsecret = this->_getinput("please imput you darkestsecret: ");
	std::cout << std::endl;
}

void Contact::setindex(int i)
{
	this->_index = i;
}