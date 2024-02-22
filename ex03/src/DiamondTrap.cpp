/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <cedmulle@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 07:47:48 by cedmulle          #+#    #+#             */
/*   Updated: 2024/02/22 09:04:51 by cedmulle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name)
: ClapTrap(name), ScavTrap(name), FragTrap(name)
{
	this->_name = name;
	this->ClapTrap::_name = name + "_clap_name";
	this->FragTrap::_health = 100;
	this->ScavTrap::_energy = 50;
	this->FragTrap::_attack = 30;
	this->printAction("DiamondTrap ", this->_name, " default constructor called (with name).");
}

DiamondTrap::~DiamondTrap(void)
{
	this->printAction("DiamondTrap ", this->_name, " destructor called.");
}

void	DiamondTrap::whoAmI(void)
{
	this->printAction("My DiamondTrap name is ", this->_name, ".");
	this->printAction("And my ClapTrap name is ", this->ClapTrap::_name, ".");
}
