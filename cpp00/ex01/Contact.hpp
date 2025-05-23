/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirwatan <hirwatan@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 11:38:03 by hirwatan          #+#    #+#             */
/*   Updated: 2025/05/23 14:20:32 by hirwatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <iomanip>

class Contact
{
	private:
		std::string _firstName;
		std::string _lastName;
		std::string _nickname;
		std::string _phonenumber;
		std::string _darkestsecret;
		int			_index;

		std::string _getinput(std::string str) const; //constをつけるから値が変わらん
		std::string _printlen(std::string str) const; //constをつけるから値が変わらん
		
	public:
		void init(void);
		void setindex(int i);
		void view(int i) const;
		void display(int i) const;
};

#endif