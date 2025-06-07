/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirwatan <hirwatan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 13:09:37 by hirwatan          #+#    #+#             */
/*   Updated: 2025/06/07 16:36:47 by hirwatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm(const std::string &name, int gradeToSign) : _name(name), _gradeToSign(gradeToSign), _gradeToExecute(0), _isSigned(false) {}
AForm::AForm(const std::string &name, int gradeToSign, int gradeToExecute) : _name(name), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute), _isSigned(false)
{
    if (gradeToSign < 1 || gradeToExecute < 1)
        throw GradeTooHighException();
    if (gradeToSign > 150 || gradeToExecute > 150)
        throw GradeTooLowException();
}
AForm::AForm(const AForm &src) : _name(src.getName()), _gradeToSign(src.getGradeToSign()), _gradeToExecute(src.getGradeToExecute()), _isSigned(src.getIsSigned()) {}
AForm::~AForm() {}

AForm &AForm::operator=(const AForm &rhs)
{
    if (this != &rhs)
    {
        this->_isSigned = rhs._isSigned;
    }
    return (*(this));
}

std::string AForm::getName() const
{
    return _name;
}

int AForm::getGradeToSign() const
{
    return _gradeToSign;
}

int AForm::getGradeToExecute() const
{
    return _gradeToExecute;
}

bool AForm::getIsSigned() const
{
    return _isSigned;
}

void AForm::beSigned(const Bureaucrat &bureaucrat)
{
    if (_isSigned)
        std::cout << "This Aform is Signed" << std::endl;
    else if (bureaucrat.getGrade() > _gradeToSign)
        throw GradeTooLowException();
    else
        _isSigned = true;
}

std::ostream &operator<<(std::ostream &out, const AForm &rhs)
{
    out << "AFormName: " << rhs.getName() << std::endl
        << "GradeToSign: " << rhs.getGradeToSign() << std::endl
        << "GradeToExecute: " << rhs.getGradeToExecute() << std::endl
        << "IsSigned: " << (rhs.getIsSigned() ? "true" : "false");
    return out;
}


