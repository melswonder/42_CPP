/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirwatan <hirwatan@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 11:25:29 by hirwatan          #+#    #+#             */
/*   Updated: 2025/05/22 17:04:31 by hirwatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <algorithm>
#include <iostream>
#include <string>
#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook book;
	std::string input = "";
	while (input.compare("EXIT"))
	{
		if(input.compare("ADD") == 0)
		{
			book.addContact();
		}
		else if(input.compare("SEARCH") == 0)
		{
			std::cout << "SEARCH" << std::endl;
		}
		else if(std::cin.eof())
		{
			std::exit(1);
		}
		std::cout << "> " << std::flush;
		std::cin >> input;
	}
	return (0);
}