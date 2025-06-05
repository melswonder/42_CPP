/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirwatan <hirwatan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 18:38:56 by hirwatan          #+#    #+#             */
/*   Updated: 2025/06/05 16:57:48 by hirwatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>

class Form;

class Bureaucrat
{
private:
    const std::string _name;
    int _grade;
    Bureaucrat();

public:
    Bureaucrat(const std::string &name, int grade);
    Bureaucrat(const Bureaucrat &src);
    ~Bureaucrat();

    Bureaucrat &operator=(const Bureaucrat &rhs);

    std::string getName() const;
    int getGrade() const;

    void incrementGrade();
    void decrementGrade();

    void signForm(Form &form);

    class GradeTooHighException : public std::exception
    {
    public:
        const char *what() const throw() { return "Grade too hight"; }
    };
    class GradeTooLowException : public std::exception
    {
    public:
        const char *what() const throw() { return "Grade too low"; }
    };
};

std::ostream &operator<<(std::ostream &out, Bureaucrat const &rhs);

#endif
