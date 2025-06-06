/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirwatan <hirwatan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 13:09:40 by hirwatan          #+#    #+#             */
/*   Updated: 2025/06/06 12:18:25 by hirwatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include <iostream>

class Bureaucrat;

class Form
{
private:
    const std::string _name;
    const int _gradeToSign;
    const int _gradeToExecute;
    bool _isSigned;
    Form();

public:
    Form(const std::string &name, int gradeToSign);
    Form(const std::string& name, int gradeToSign, int gradeToExecute);
    Form(const Form& src);
    virtual ~Form();

    Form &operator=(const Form &rhs);

    
    std::string getName() const;
    int getGradeToSign() const;
    int getGradeToExecute() const;
    bool getIsSigned() const;

    void beSigned(const Bureaucrat &bureaucrat);

    class GradeTooHighException : public std::exception
    {
    public:
        virtual const char *what() const throw() { return "Grade too high"; }
    };
    class GradeTooLowException : public std::exception
    {
    public:
        virtual const char *what() const throw() { return "Grade too low"; }
    };
    class NosignedException : public std::exception
    {
    public:
        virtual const char *what() const throw() { return "From not signed"; }
    };
};

std::ostream &operator<<(std::ostream &out, const Form &rhs);

#endif