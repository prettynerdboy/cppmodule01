/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakin <anakin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 14:43:35 by anakin            #+#    #+#             */
/*   Updated: 2025/03/15 14:43:44 by anakin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv)
{
	Harl harl;
	if (argc != 2)
	{
		std::cerr << "invalid parameters" << std::endl;
		return (1);
	}
	harl.complain(argv[1]);

	return (0);
}