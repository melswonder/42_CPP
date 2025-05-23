/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirwatan <hirwatan@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 11:38:13 by hirwatan          #+#    #+#             */
/*   Updated: 2025/05/23 12:28:14 by hirwatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

//member variable
class PhoneBook
{
	private:
		Contact _contacts[8];//contact structure
	public:
		void addContact(void); //member function
		void printContact(void);
		void SearchBook(void);
		int readInput(void);
};

#endif