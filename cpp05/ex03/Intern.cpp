/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirwatan <hirwatan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 11:56:38 by hirwatan          #+#    #+#             */
/*   Updated: 2025/06/09 16:05:32 by hirwatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <iostream>

Intern::Intern() {}
Intern::Intern(const Intern &other) { (void)other; } // Intern is unknow 属性
Intern &Intern::operator=(const Intern &other)
{
    (void)other;
    return (*this);
}
Intern::~Intern() {}

const char *Intern::FormNotFoundException::what() const throw()
{
    return "Form not found";
}


static AForm* createPresidentialPardonForm(const std::string &target)
{
    return new PresidentialPardonForm(target); // 動的割当
};

static AForm* createRobotomyRequestForm(const std::string &target)
{
    return new RobotomyRequestForm(target);
};

static AForm* createShrubberyCreationForm(const std::string &target)
{
    return new ShrubberyCreationForm(target);
};

AForm *Intern::makeForm(const std::string &formName, const std::string &target)
{
    struct FormType
    {
        std::string name;
        AForm *(*creator)(const std::string &);
    };

    FormType forms[] = 
    {
        {"President", createPresidentialPardonForm},
        {"Robotomy", createRobotomyRequestForm},
        {"Shrubbery", createShrubberyCreationForm}
    };

    for (size_t i = 0; i < 3; i++)
    {
        if (formName == forms[i].name)
        {
            AForm *form = forms[i].creator(target);
            std::cout << "Intern creates " << formName << std::endl;
            return form;
        }
    }
    std::cout << "Intern cannnot create " << formName << " form: not found" << std::endl;
    throw FormNotFoundException();
}
