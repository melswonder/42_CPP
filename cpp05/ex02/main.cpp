/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirwatan <hirwatan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 12:33:38 by hirwatan          #+#    #+#             */
/*   Updated: 2025/06/06 12:36:48 by hirwatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

#define NC "\e[0m"
#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define CYN "\e[0;36m"
#define REDB "\e[41m"

int main( void )
{
    srand(time(NULL)); //random ni suru
    try {
        Bureaucrat bureaucrat("Hanako", 5);// error 200
        ShrubberyCreationForm form1("Shrubbery");
        RobotomyRequestForm form2("Robotomy");
        PresidentialPardonForm form3("President");

        std::cout << "\n--------------- Form 1 ( ShrubberyCreationForm ) ---------------" << std::endl;
        bureaucrat.signForm(form1);
        form1.execute(bureaucrat);
        std::cout << "\n--------------- Form 2 ( RobotomyRequestForm ) ---------------" << std::endl;
        bureaucrat.signForm(form2);
        form2.execute(bureaucrat);
        form2.execute(bureaucrat);
        form2.execute(bureaucrat);
        form2.execute(bureaucrat);
        form2.execute(bureaucrat);
        std::cout << "\n--------------- Form 3 ( PresidentialPardonForm ) ---------------" << std::endl;
        bureaucrat.signForm(form3);
        form3.execute(bureaucrat);
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}