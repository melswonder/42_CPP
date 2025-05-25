/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirwatan <hirwatan@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 14:36:39 by hirwatan          #+#    #+#             */
/*   Updated: 2025/05/25 13:46:08 by hirwatan         ###   ########.fr       */
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
	_nbDeposits = 0;
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


void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accounts" << getNbAccounts() << ";"
			  << "total:"	<< getTotalAmount() << ";"
			  << "deposits" << getNbAccounts() << ";"
			  << "withdrawals" << getNbWithdrawals() << std::endl;
}
void	Account::makeDeposit(int deposit)
{
    this->_displayTimestamp();
    _nbDeposits++;
    _totalNbDeposits++;
    _totalAmount += deposit;
    std::cout << "index:" << _accountIndex << ";"
                << "p_amount:" << _amount << ";" << std::flush;
    _amount += deposit;
    std::cout << "deposit:" << deposit << ";"
                << "amount:" << _amount << ";"
                << "nb_deposit:" << _nbDeposits << std::endl;
}
bool	Account::makeWithdrawal(int withdrawal)
{
	this->_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";"
			  << "p_amount" << _amount << ";"
			  << "withdrawal" << std::flush;
	if(withdrawal > checkAmount())
	{
		std::cout << "refused" << std::endl;
		return false;
	}
	std::cout << withdrawal << ";" << std::flush;
	_nbWithdrawals++;
	_totalNbWithdrawals++;
	_totalAmount -= withdrawal;
	_amount -= withdrawal;
	std::cout << "amount:" << _amount << ";"
			  << "nb_deposit" << _nbDeposits << std::endl;
	return true;
}


void	Account::displayStatus(void) const 
{
	this->_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";"
			  << "total:" << _amount << ";"
			  << "deposits:" << _nbDeposits << ";"
			  << "withdrawals:" << _nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp(void)
{
	std::time_t now = std::time(NULL);
	std::tm *localtime = std::localtime(&now);
	std::cout << "[" << std::flush;
	std::cout << localtime->tm_year + 1900 << std::flush;
	std::cout << localtime->tm_mon + 1 << std::flush;
	std::cout << localtime->tm_mday << std::flush;
	std::cout << "_" << std::flush;
	std::cout << localtime->tm_hour << std::flush;
	std::cout << localtime->tm_min << std::flush;
	std::cout << localtime->tm_sec << std::flush;
	std::cout << "] " << std::flush;
}
int		Account::checkAmount(void) const
{
	return (_amount);
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