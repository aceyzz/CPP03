/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <cedmulle@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 14:52:24 by cedmulle          #+#    #+#             */
/*   Updated: 2024/02/22 07:02:59 by cedmulle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	std::cout << CLEAR;

	std::cout << GRY "// CONSTRUCTORS //" RST << std::endl;
	ClapTrap	ct1("Zbeub");
	ScavTrap	st1("Bill");
	ScavTrap	st2("John");

	st1.setTarget(&st2);
	st2.setTarget(&st1);

	std::cout << std::endl << GRY "// PRINT INFOS //" RST << std::endl;
	st1.printInfos();
	st2.printInfos();

	std::cout << GRY "// BILL ATTACKS JOHN 2 TIMES //" RST << std::endl;
	st1.attack("John");
	st1.attack("John");

	std::cout << std::endl << GRY "// JOHN ATTACKS BILL //" RST << std::endl;
	st2.attack("Bill");

	std::cout << std::endl << GRY "// PRINT INFOS //" RST << std::endl;
	st1.printInfos();
	st2.printInfos();

	std::cout << std::endl << GRY "// BILL IN GUARD MODE //" RST << std::endl;
	st1.guardGate();

	std::cout << std::endl << GRY "// JOHN IN GUARD MODE //" RST << std::endl;
	st2.guardGate();

	std::cout << std::endl << GRY "// DESTRUCTORS //" RST << std::endl;
	return (0);
}
