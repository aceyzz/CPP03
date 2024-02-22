/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <cedmulle@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 18:02:22 by cedmulle          #+#    #+#             */
/*   Updated: 2024/02/22 18:04:44 by cedmulle         ###   ########.fr       */
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
	this->FragTrap::_hp = 100;
	this->ScavTrap::_en = 50;
	this->FragTrap::_ap = 30;
	std::cout << this->_name << " constructor called." << std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << this->_name << " destructor called." << std::endl;
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "My DiamonTrap name is " << this->_name << std::endl;
	std::cout << "And my ClapTrap name is " << ClapTrap::_name << std::endl;
}
