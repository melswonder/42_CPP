/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirwatan <hirwatan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 12:33:38 by hirwatan          #+#    #+#             */
/*   Updated: 2025/06/05 13:07:14 by hirwatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
    std::string name = "human";
    try
    {
        Bureaucrat bureaucrat(name,1);
        // Bureaucrat bureaucrat(name,150);
        std::cout << bureaucrat << std::endl;
        bureaucrat.incrementGrade();
        // bureaucrat.decrementGrade();
        std::cout << "UwU" << std::endl;
    }
    catch(const Bureaucrat::GradeTooHighException& e)
    {
        std::cerr << e.what() << '\n';
    }
    catch(const Bureaucrat::GradeTooLowException& e)
    {
        std::cerr << e.what() << '\n';
    }
    catch(...)
    {
        std::cerr << "???" << '\n';
    }
    return (0);
}