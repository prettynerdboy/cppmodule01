/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakin <anakin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 10:38:26 by anakin            #+#    #+#             */
/*   Updated: 2025/03/15 14:35:02 by anakin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::~HumanB()
{
}

void HumanB::attack(void)
{
    if(this->weapon != NULL && !this->weapon->getType().empty())
        std::cout << name << " attacks with their " << this->weapon->getType() << std::endl;
    else
        std::cout << name << " doesn't have a weapon . so...punch!!" << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
}