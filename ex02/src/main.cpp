/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <cedmulle@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 16:34:00 by cedmulle          #+#    #+#             */
/*   Updated: 2024/02/22 20:31:39 by cedmulle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	std::cout << CLR;

	std::cout << GRY "// CONSTRUCTORS //" RST << std::endl;
	ClapTrap	ct1(MAG "John" RST);
	ScavTrap	st1(BLU "Bill" RST);
	FragTrap	ft1(RED "Jane" RST);

	std::cout << std::endl << GRY "// JOHN ATTACKS BILL //" RST << std::endl;
	ct1.attack("Bill");

	std::cout << std::endl << GRY "// BILL ATTACKS JOHN //" RST << std::endl;
	st1.attack("John");

	std::cout << std::endl << GRY "// JANE ATTACKS BILL //" RST << std::endl;
	ft1.attack("Bill");

	std::cout << std::endl << GRY "// JOHN TAKES 3 DAMAGE //" RST << std::endl;
	ct1.takeDamage(3);

	std::cout << std::endl << GRY "// BILL TAKES 5 DAMAGE //" RST << std::endl;
	st1.takeDamage(5);

	std::cout << std::endl << GRY "// JANE TAKES 2 DAMAGE //" RST << std::endl;
	ft1.takeDamage(2);

	std::cout << std::endl << GRY "// JOHN REPAIRED 1 POINTS //" RST << std::endl;
	ct1.beRepaired(1);

	std::cout << std::endl << GRY "// BILL REPAIRED 2 POINTS //" RST << std::endl;
	st1.beRepaired(2);

	std::cout << std::endl << GRY "// JANE REPAIRED 4 POINTS //" RST << std::endl;
	ft1.beRepaired(4);

	std::cout << std::endl << GRY "// JANE WANTS TO HIGH //" RST << std::endl;
	ft1.highFiveGuys();

	std::cout << std::endl << GRY "// DESTRUCTORS //" RST << std::endl;
	return (0);
}
