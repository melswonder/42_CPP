/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirwatan <hirwatan@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 14:36:39 by hirwatan          #+#    #+#             */
/*   Updated: 2025/05/23 17:37:50 by hirwatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	_nbAccounts++;
	_accountIndex = _nbAccounts - 1;
	_amount = initial_deposit;
	_totalAmount += _amount;
	_nbAccounts = 0;
	_nbWithdrawals = 0;
	this->_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";"
				<< "amount:" << _amount << ";"
				<< "created" << std::endl;
}

Account::~Account( void )
{
	_nbAccounts--;
	this->_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";"
			  << "amount" << _amount << ";"
			  << "closed" << std::endl;
}

int Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

int Account::getTotalAmount(void)
{
	return (_totalAmount);
}

int Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}

int Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}

void	displayAccountsInfos(void)
{
}
void	makeDeposit(int deposit);
bool	makeWithdrawal(int withdrawal);
int		checkAmount(void) const;
void	displayStatus(void) const;

void	_displayTimestamp(void)
{
	std::time_t now = std::time(nullptr);
	std::tm *localtime = std::localtime(&now);
	std::cout << "[" << std::flush;
	std::cout << localtime->tm_year + 1900 << std::flush;
	std::cout << "_" << std::flush;
	std::cout << localtime->tm_mon + 1 << std::flush;
	std::cout << localtime->tm_mday << std::endl;
	std::cout << "] " << std::flush;
}

Account::Account(void);
