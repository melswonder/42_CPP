/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirwatan <hirwatan@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 11:38:07 by hirwatan          #+#    #+#             */
/*   Updated: 2025/05/23 14:31:05 by hirwatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <cstdlib>

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


std::string Contact::_printlen(std::string str) const
{
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	return (str);
}

void Contact::display(int i) const
{
	std::cout << std::endl;
	std::cout << "!!!!!CONTACT #" << i << "!!!!!" << std::endl;
	std::cout << "First Name:\t" << this->_firstName << std::endl; 
	std::cout << "Last Name:\t" << this->_lastName << std::endl; 
	std::cout << "Nickname:\t" << this->_nickname << std::endl;
	std::cout << std::endl;
}


void Contact::view(int i) const
{
	if (this->_firstName.empty() || this->_lastName.empty()
		|| this->_nickname.empty())
		return ;
	std::cout << "|" << std::setw(10) << i << std::flush;
	std::cout << "|" << std::setw(10) << this->_printlen(this->_firstName) << std::flush;
	std::cout << "|" << std::setw(10) << this->_printlen(this->_lastName) << std::flush;
	std::cout << "|" << std::setw(10) << this->_printlen(this->_nickname) << std::flush;
	std::cout << "|" << std::endl;
}
