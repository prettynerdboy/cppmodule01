/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakin <anakin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 08:48:56 by anakin            #+#    #+#             */
/*   Updated: 2025/03/05 08:56:10 by anakin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    std::string name;
    int hordeCount;
    
    std::cout <<"Creating Zombie on the stack." << std::endl;
    std::cin >> name;
    
    Zombie zombie1(name);

    hordeCount = 10;
    std::cout << "Creating zombie horde on the heap." << std::endl;
	std::cout << "Horde name: " << std::flush;
	std::cin >> name;

	Zombie *horde = zombieHorde(hordeCount, name);
    for(int i = 0;i<hordeCount; i++)
    {
        horde[i].announce();
    }
    delete[] horde;
    return(0);
}