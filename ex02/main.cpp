/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakin <anakin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 09:55:13 by anakin            #+#    #+#             */
/*   Updated: 2025/03/05 10:05:41 by anakin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
    std::string str = "HI THIS IS BRAIN";

    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "string is                 " << str << std::endl;
    std::cout << "string's memory addres is " << stringPTR << std::endl;
    std::cout << "memory ref is             " <<stringREF <<std::endl;
    std::cout << "memory ref addres is      " << &stringREF << std::endl;
    return (0);
}

