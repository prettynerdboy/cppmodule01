/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakin <anakin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 08:35:21 by anakin            #+#    #+#             */
/*   Updated: 2025/03/05 08:58:15 by anakin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::Zombie(std::string new_name)
{
    this->name = new_name;
}

Zombie::~Zombie(void)
{
    std::cout << this->name << " Has been destroyed" << std::endl;
}

void Zombie::setName(std::string new_name)
{
    this->name = new_name;
}

void Zombie::announce(void)
{
    std::cout << this ->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}