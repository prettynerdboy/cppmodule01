/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakin <anakin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 11:49:44 by anakin            #+#    #+#             */
/*   Updated: 2025/03/10 19:31:22 by anakin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	Harl harl;

	std::cout << "[ DEBUG ]" << std::endl;
	harl.complain("DEBUG");
	std::cout << std::endl;

	std::cout << "[ INFO ]" << std::endl;
	harl.complain("INFO");
	std::cout << std::endl;

	std::cout << "[ WARNING ]" << std::endl;
	harl.complain("WARNING");
	std::cout << std::endl;

	std::cout << "[ ERROR ]" << std::endl;
	harl.complain("ERROR");
	std::cout << std::endl;
	
	std::cout << "[ ELSE ]" << std::endl;
	harl.complain("INVALID");

	return (0);
}

// void suckmyass(int times){
//     for(int i = 0; i < times ; i++)
//     {
//         std::cout <<"suck my ass !" << std :: endl;
//     }
// }


// void driptoohard(int times){
//     for(int i = 0; i < times ; i++)
//     {
//         std::cout <<"drip too hard" << std :: endl;
//     }
// }

// void driptoohard(int times,std::string name){
//     std::cout << name << "is";
//     for(int i = 0; i < times ; i++)
//     {
//         std::cout <<"drip too hard" << std :: endl;
//     }
// }

// /*
// オーバーロードには対応してない、おそらくしまえるのは一つのバージョンの関数だけ
// */
// int main(){
//     void (*funcPtr)(int) = &suckmyass;

//     funcPtr(2);
//     funcPtr(5);
//     funcPtr = &driptoohard;
//     funcPtr(1);
//     std::string name ="sojun";
//     funcPtr = 
//     funcPtr(5,name);
// }