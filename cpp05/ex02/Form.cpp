/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirwatan <hirwatan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 13:09:37 by hirwatan          #+#    #+#             */
/*   Updated: 2025/06/05 17:40:17 by hirwatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(const std::string &name, int gradeToSign) : _name(name), _gradeToSign(gradeToSign), _gradeToExecute(0), _isSigned(false) {}
Form::Form(const std::string &name, int gradeToSign, int gradeToExecute) : _name(name), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute), _isSigned(false)
{
    if (gradeToSign < 1 || gradeToExecute < 1)
        throw GradeTooHighException();
    if (gradeToSign > 150 || gradeToExecute > 150)
        throw GradeTooLowException();
}
Form::Form(const Form &src) : _name(src.getName()), _gradeToSign(src.getGradeToSign()), _gradeToExecute(src.getGradeToExecute()), _isSigned(src.getIsSigned()) {}
Form::~Form() {}

Form &Form::operator=(const Form &rhs)
{
    if (this != &rhs)
    {
        this->_isSigned = rhs._isSigned;
    }
    return (*(this));
}

std::string Form::getName() const
{
    return _name;
}

int Form::getGradeToSign() const
{
    return _gradeToSign;
}

int Form::getGradeToExecute() const
{
    return _gradeToExecute;
}

bool Form::getIsSigned() const
{
    return _isSigned;
}

void Form::beSigned(const Bureaucrat &bureaucrat)
{
    if (_isSigned)
        std::cout << "This form is Signed" << std::endl;
    else if (bureaucrat.getGrade() > _gradeToSign)
        throw GradeTooLowException();
    else
        _isSigned = true;
}

std::ostream &operator<<(std::ostream &out, const Form &rhs)
{
    out << "FormName: " << rhs.getName() << std::endl
        << "GradeToSign: " << rhs.getGradeToSign() << std::endl
        << "GradeToExecute: " << rhs.getGradeToExecute() << std::endl
        << "IsSigned: " << (rhs.getIsSigned() ? "true" : "false");
    return out;
}