/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirwatan <hirwatan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 11:17:30 by hirwatan          #+#    #+#             */
/*   Updated: 2025/05/27 19:34:40 by hirwatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
#define SED_HPP

#include <string>
#include <fstream>
#include <iostream>

class Sed
{
private:
    std::string _infile;
    std::string _outfile;

public:
    Sed(std::string filename);
    ~Sed();
    void replace(std::string find,std::string replace);
};

#endif