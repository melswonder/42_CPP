/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirwatan <hirwatan@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 11:38:10 by hirwatan          #+#    #+#             */
/*   Updated: 2025/05/22 17:40:21 by hirwatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void  PhoneBook::addContact(void)
{
	static int i;
	this->_contacts[i % 8].init();
	this->_contacts[i % 8].setindex(i % 8);
	i++;
}