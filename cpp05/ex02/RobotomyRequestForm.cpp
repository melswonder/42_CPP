/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirwatan <hirwatan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 17:47:34 by hirwatan          #+#    #+#             */
/*   Updated: 2025/06/06 12:28:56 by hirwatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"
#include <cstdlib>
#include <ctime>

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : Form("RobotomyRequestForm", 25, 5), _RRtarget(target) {}
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src) : Form(src), _RRtarget(src._RRtarget) {}
RobotomyRequestForm ::~RobotomyRequestForm() {}
RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs)
{
    (void)rhs;
    return (*this);
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
    if (executor.getGrade() > this->getGradeToExecute())
        throw Form::GradeTooLowException();
    if (rand() % 2 == 0)
        std::cout << "grrrrrrrrrrr!" << _RRtarget << "has been robotomized" << std::endl;
    else
        std::cout << _RRtarget << "the robotomy failed." << std::endl;
}
