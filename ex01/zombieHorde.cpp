/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakin <anakin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 08:43:08 by anakin            #+#    #+#             */
/*   Updated: 2025/03/05 08:45:30 by anakin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int N,std::string name)
{
    Zombie *horde;

    horde = new Zombie[N];
    for(int i = 0;i<N;i++)
    {
        horde[i].setName(name);
    }
    return(horde);
}