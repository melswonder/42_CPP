/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirwatan <hirwatan@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 18:45:29 by hirwatan          #+#    #+#             */
/*   Updated: 2025/05/22 12:00:21 by hirwatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <algorithm>
#include <iostream>
#include <string>

struct	ToUpper
{
	char operator()(char c) const
	{
		return (std::toupper(static_cast <unsigned char>(c)));
	}
};

int	main(int argc, char *argv[])
{
	if (argc < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	}
	else
	{
		for (int i = 1; i < argc; i++)
		{
			std::string str(argv[i]);
			std::transform(str.begin(), str.end(), str.begin(), ToUpper());
			std:: cout << str;
			if (i < argc - 1)
				std::cout << " ";
		}
		std::cout << std::endl;
		return (0);
	}
}
