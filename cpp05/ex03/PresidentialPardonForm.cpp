/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirwatan <hirwatan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 17:47:37 by hirwatan          #+#    #+#             */
/*   Updated: 2025/06/07 16:42:45 by hirwatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : AForm("PresidentialPardonForm", 25, 5), _PPtarget(target) {}
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src) : AForm(src), _PPtarget(src._PPtarget) {}
PresidentialPardonForm ::~PresidentialPardonForm(){}
PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs)
{
    (void)rhs;
    return (*this);
}

void    PresidentialPardonForm::execute(const Bureaucrat& executor) const
{
    if (!this->getIsSigned())
        throw AForm::NosignedException();
    if(executor.getGrade() > this->getGradeToExecute())
        throw AForm::GradeTooHighException();
    else
        std::cout << _PPtarget << "has been pardoned by the president." << std::endl;
}