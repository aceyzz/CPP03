/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <cedmulle@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 05:51:31 by cedmulle          #+#    #+#             */
/*   Updated: 2024/02/22 09:04:34 by cedmulle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
: ClapTrap()
{
	this->_health = 100;
	this->_energy = 50;
	this->_attack = 20;
	this->printAction("ScavTrap ", GRY "wild" RST, " default constructor called.");
}

ScavTrap::ScavTrap(std::string name)
: ClapTrap(name)
{
	this->_name = name;
	this->_health = 100;
	this->_energy = 50;
	this->_attack = 20;
	this->printAction("ScavTrap ", this->_name, " default constructor called (with name).");
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap destructor called." << std::endl;
}

void	ScavTrap::guardGate(void)
{
	return (this->printAction("ScavTrap ", this->_name, " is now in Gate keeper mode."));
}
