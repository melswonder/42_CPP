/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   humanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirwatan <hirwatan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 14:47:15 by hirwatan          #+#    #+#             */
/*   Updated: 2025/05/26 19:38:31 by hirwatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
    private:
        std::string _name;
        Weapon&     _weapon;//参照変数の初期化は絶対
        HumanA();//このコンストラクタは使わないでくださいができる　参照変数のとき

    public:
        HumanA(std::string name ,Weapon &Weapon);
        ~HumanA();
        void attack(void) const;
};

#endif