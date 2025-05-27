/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirwatan <hirwatan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 11:17:32 by hirwatan          #+#    #+#             */
/*   Updated: 2025/05/27 19:37:00 by hirwatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

Sed::Sed(std::string infile) : _infile(infile)
{
    this->_outfile = this->_infile + ".replace";
}

Sed::~Sed(void)
{
}
void Sed::replace(std::string find, std::string replace)
{
    std::ifstream ifs(this->_infile.c_str());
    if (ifs.is_open())
    {
        std::string content;
        if (std::getline(ifs, content, '\0'))
        {
            std::ofstream ofs(this->_outfile.c_str());
            if (ofs.is_open())
            {
                size_t pos = content.find(find);
                while (pos != std::string::npos)
                {
                    content.erase(pos, find.length());
                    content.insert(pos, replace);
                    pos = content.find(find, pos + replace.length());
                }
                ofs << content;
                ofs.close();
            }
            else
            {
                std::cout << "outputfile open faild" << std::endl;
            }
        }
        else
        {
            std::cout << "file is empty or faild" << std::endl;
        }
        ifs.close();
    }
    else
    {
        std::cout << "file open faild: " << this->_infile << std::endl;
    }
}