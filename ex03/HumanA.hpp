/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakin <anakin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 10:21:01 by anakin            #+#    #+#             */
/*   Updated: 2025/03/15 14:34:15 by anakin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_HPP
# define HUMAN_A_HPP

# include "Weapon.hpp"

class HumanA
{
    private:
    std::string name;
    Weapon &weapon;
    
    public:
        HumanA(std::string newName,Weapon &newWeapon):name(newName),weapon(newWeapon){}
        ~HumanA();
        void attack();
};
#endif

//HumanA は Weaponをコンストラクタで受け取る。