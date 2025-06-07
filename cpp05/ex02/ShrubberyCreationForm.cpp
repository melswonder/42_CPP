/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirwatan <hirwatan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 17:47:45 by hirwatan          #+#    #+#             */
/*   Updated: 2025/06/07 16:21:55 by hirwatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
#include <filesystem>
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : AForm("ShrubberyCreationForm", 145, 137), _SCtarget(target) {}
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src) : AForm(src), _SCtarget(src._SCtarget) {}
ShrubberyCreationForm ::~ShrubberyCreationForm() {}
ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs)
{
    (void)rhs;
    return (*this);
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
    if (this->getIsSigned() == false)
        throw AForm::NosignedException();
    else if (executor.getGrade() > this->getGradeToExecute())
        throw AForm::GradeTooLowException();

    std::ofstream file((this->getName() + "_shrubbery").c_str());
    if (file)
    {
        file << "   ccee88oo" << std::endl;
        file << "  C8O8O8Q8PoOb o8oo" << std::endl;
        file << " dOB69QO8PdUOpugoO9bD" << std::endl;
        file << "CgggbU8OU qOp qOdoUOdcb" << std::endl;
        file << "    6OuU  /p u gcoUodpP" << std::endl;
        file << "      \\\\\\//  /douUP" << std::endl;
        file << "        \\\\\\////" << std::endl;
        file << "         |||/\\" << std::endl;
        file << "         |||\\/" << std::endl;
        file << "         |||||" << std::endl;
        file << "   .....//||||\\...." << std::flush;
    }
    else
    {
        std::cout << "Failed to create file." << std::endl;
    }
}
