/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agianico <agianico@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 19:43:50 by agianico          #+#    #+#             */
/*   Updated: 2022/07/14 17:38:34 by agianico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main(int argc, char **argv)
{
	Karen	karen;
	int complain;

	if (!argv[1])
	{
		std::cout << "Please put a complain instruction for Karen" << std::endl;
		return 0;
	}

	complain = karen.complain(argv[1]);
	if (argc == 2)
	{
		switch(complain)
		{
			case 0:
				std::cout << "[ DEBUG ]" << std::endl << karen.debug() << std::endl << std::endl;
			case 1:
				std::cout << "[ INFO ]" << std::endl << karen.info() << std::endl << std::endl;
			case 2:
				std::cout << "[ WARNING ]" << std::endl << karen.warning() << std::endl << std::endl;
			case 3:
				std::cout << "[ ERROR ]" << std::endl << karen.error() << std::endl << std::endl;
			break;
			default:
				std::cout << "[ Probably complaining about insignificant problems ]" << std::endl << std::endl;
		}
	}
	else
	{
		std::cout << "Too much arguments" << std::endl;
	}
}