/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <cedmulle@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 14:52:24 by cedmulle          #+#    #+#             */
/*   Updated: 2024/02/20 15:37:17 by cedmulle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	std::cout << CLEAR;

	ClapTrap	ct1("John");
	ClapTrap	ct2("Bill");

	std::cout << std::endl;
	std::cout << BLU "//// INIT TARGETS TO EACH OTHER ////" RST << std::endl;
	ct1.setTarget(&ct2);
	ct2.setTarget(&ct1);
	std::cout << std::endl;

	std::cout << BLU "//// PRINT INFOS ////" RST << std::endl;
	ct1.printInfos();
	ct2.printInfos();
	std::cout << std::endl;

	std::cout << BLU "//// JOHN ATTACKS WITH BAD ARGUMENT ////" RST << std::endl;
	ct1.attack("invalidClaptrap");
	std::cout << std::endl;

	std::cout << BLU "//// JOHN ATTACKS WITH BILL ARGUMENT ////" RST << std::endl;
	ct1.attack("Bill");
	std::cout << std::endl;

	std::cout << BLU "//// PRINT INFOS ////" RST << std::endl;
	ct1.printInfos();
	ct2.printInfos();
	std::cout << std::endl;

	std::cout << BLU "//// BILL RAGE ATTACKS WITH JOHN ARGUMENT ////" RST << std::endl;
	for (int i = 0; i < 6; i++)
	{
		ct2.attack("John");
		std::cout << std::endl;	
		ct1.printInfos();
		ct2.printInfos();
	}
	std::cout << std::endl;

	std::cout << BLU "//// DEAD JOHN ATTACKS WITH BILL ARGUMENT ////" RST << std::endl;
	ct1.attack("Bill");
	std::cout << std::endl;

	std::cout << BLU "//// JOHN REPAIR ITSELF WITH 12 POINTS ////" RST << std::endl;
	ct1.beRepaired(12);
	std::cout << std::endl;

	std::cout << BLU "//// PRINT INFOS ////" RST << std::endl;
	ct1.printInfos();
	ct2.printInfos();
	std::cout << std::endl;

	std::cout << BLU "//// BILL RAGE ATTACKS UNTIL NO ENERGY ////" RST << std::endl;
	for (int i = 0; i < 5; i++)
	{
		ct2.attack("John");
		std::cout << std::endl;	
		ct1.printInfos();
		ct2.printInfos();
	}
	std::cout << std::endl;

	std::cout << BLU "//// JOHN ATTACKS WITH BILL ARGUMENT ////" RST << std::endl;
	ct1.attack("Bill");
	std::cout << std::endl;

	std::cout << BLU "//// PRINT INFOS ////" RST << std::endl;
	ct1.printInfos();
	ct2.printInfos();
	std::cout << std::endl;

	return (0);
}
