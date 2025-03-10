/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakin <anakin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 07:21:15 by anakin            #+#    #+#             */
/*   Updated: 2025/03/05 08:22:20 by anakin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string new_name)
{
    this->name = new_name;
}
Zombie::~Zombie()
{
    std::cout << this->name << " are dead (uhh, they were dead to begin with...)" << std::endl;
}

void Zombie::announce(void)
{
    std::cout <<this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}