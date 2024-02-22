/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <cedmulle@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 16:34:00 by cedmulle          #+#    #+#             */
/*   Updated: 2024/02/22 17:11:48 by cedmulle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	std::cout << CLR;

	std::cout << GRY "// CONSTRUCTORS //" RST << std::endl;
	ClapTrap	ct1("John");
	ClapTrap	ct2("Bill");

	std::cout << std::endl << GRY "// JOHN ATTACKS BILL //" RST << std::endl;
	ct1.attack("Bill");

	std::cout << std::endl << GRY "// BILL ATTACKS JOHN //" RST << std::endl;
	ct2.attack("John");

	std::cout << std::endl << GRY "// JOHN TAKES 3 DAMAGE //" RST << std::endl;
	ct1.takeDamage(3);

	std::cout << std::endl << GRY "// BILL TAKES 5 DAMAGE //" RST << std::endl;
	ct2.takeDamage(5);

	std::cout << std::endl << GRY "// JOHN REPAIRED 1 POINTS //" RST << std::endl;
	ct1.beRepaired(1);

	std::cout << std::endl << GRY "// BILL REPAIRED 2 POINTS //" RST << std::endl;
	ct2.beRepaired(2);

	std::cout << std::endl << GRY "// DESTRUCTORS //" RST << std::endl;
	return (0);
}
