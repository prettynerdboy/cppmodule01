/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakin <anakin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 10:18:55 by anakin            #+#    #+#             */
/*   Updated: 2025/03/15 14:33:34 by anakin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::~HumanA()
{
}

void HumanA::attack(void)
{
    std::cout << this->name<< " attacks with their " << this->weapon.getType() << std::endl;
}

//質問voidfunctionにもconstは付けるべきか？