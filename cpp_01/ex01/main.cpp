/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agianico <agianico@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 19:41:43 by agianico          #+#    #+#             */
/*   Updated: 2022/07/13 19:24:04 by agianico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main( void )
{
    std::string name;
    int         N;

    std::cout << "Ponle un nombre a tu Zombie:" << std::endl;
    std::getline(std::cin, name);
    std::cout << "Y pon el numero de zombies que quieres crear:" << std::endl;
    std::cin >> N;
    Zombie *zombie = zombieHorde(N, name);
    delete [] zombie;
    return 0;
}