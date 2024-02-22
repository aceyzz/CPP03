/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <cedmulle@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 14:52:24 by cedmulle          #+#    #+#             */
/*   Updated: 2024/02/22 07:23:47 by cedmulle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	std::cout << CLEAR;

	std::cout << GRY "// CONSTRUCTORS //" RST << std::endl;
	ClapTrap	ct1("Zbeub");
	ScavTrap	st1("Zboub");
	FragTrap	ft1("Bill");
	FragTrap	ft2("John");

	ft1.setTarget(&ft2);
	ft2.setTarget(&ft1);

	std::cout << std::endl << GRY "// PRINT INFOS //" RST << std::endl;
	ft1.printInfos();
	ft2.printInfos();

	std::cout << GRY "// BILL ATTACKS JOHN 2 TIMES //" RST << std::endl;
	ft1.attack("John");
	ft1.attack("John");

	std::cout << std::endl << GRY "// JOHN ATTACKS BILL //" RST << std::endl;
	ft2.attack("Bill");

	std::cout << std::endl << GRY "// PRINT INFOS //" RST << std::endl;
	ft1.printInfos();
	ft2.printInfos();

	std::cout << std::endl << GRY "// BILL FOR HIGH FIVE //" RST << std::endl;
	ft1.highFiveGuys();

	std::cout << std::endl << GRY "// JOHN FOR HIGH FIVE //" RST << std::endl;
	ft2.highFiveGuys();

	std::cout << std::endl << GRY "// DESTRUCTORS //" RST << std::endl;
	return (0);
}
