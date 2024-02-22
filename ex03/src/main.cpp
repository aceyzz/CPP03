/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <cedmulle@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 14:52:24 by cedmulle          #+#    #+#             */
/*   Updated: 2024/02/22 09:08:54 by cedmulle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void)
{
	std::cout << CLEAR;

	std::cout << GRY "// CONSTRUCTORS JOHN //" RST << std::endl;
	DiamondTrap dt1("John");

	std::cout << std::endl << GRY "// CONSTRUCTORS BILL //" RST << std::endl;
	DiamondTrap dt2("Bill");

	std::cout << std::endl << GRY "// CALL WHO AM I JOHN //" RST << std::endl;
	dt1.whoAmI();

	std::cout << std::endl << GRY "// CALL GUARD GATE BILL //" RST << std::endl;
	dt2.guardGate();

	std::cout << std::endl << GRY "// CALL HIGH FIVE JOHN //" RST << std::endl;
	dt1.highFiveGuys();

	std::cout << std::endl << GRY "// BILL ATTACK JOHN //" RST << std::endl;
	dt2.attack("John");

	std::cout << std::endl << GRY "// JOHN TAKES DAMAGE //" RST << std::endl;
	dt1.takeDamage(30);

	std::cout << std::endl << GRY "// JOHN BEREPAIRED //" RST << std::endl;
	dt2.beRepaired(10);

	std::cout << std::endl << GRY "// DESTRUCTORS //" RST << std::endl;
	return (0);
}
