/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirwatan <hirwatan@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 18:45:29 by hirwatan          #+#    #+#             */
/*   Updated: 2025/05/25 14:12:34 by hirwatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

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
			for(size_t j = 0; j < str.length(); j++)
				str[j] = std::toupper(static_cast <unsigned char>(str[j]));
			std:: cout << str;
			if (i < argc - 1)
				std::cout << " ";
		}
		std::cout << std::endl;
		return (0);
	}
}
