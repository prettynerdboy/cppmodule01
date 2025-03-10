/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakin <anakin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 10:14:33 by anakin            #+#    #+#             */
/*   Updated: 2025/03/07 10:29:29 by anakin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <cstddef>
# include <iostream>

class Weapon
{
    private:
        std::string type;
    public:
        Weapon(std::string type);
        const std::string& getType(void) const;
        void setType(std::string type);
};

#endif