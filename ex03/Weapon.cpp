/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakin <anakin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 10:16:44 by anakin            #+#    #+#             */
/*   Updated: 2025/03/15 14:36:43 by anakin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::~Weapon()
{
}

Weapon::Weapon(std::string type)
{
    this->setType(type);
}

const std::string& Weapon::getType(void)const
{
    return (this->type);
}

void Weapon::setType(std::string newType)
{
    this->type = newType;
}