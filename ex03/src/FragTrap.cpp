/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <cedmulle@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 07:12:58 by cedmulle          #+#    #+#             */
/*   Updated: 2024/02/22 09:05:39 by cedmulle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
: ClapTrap()
{
	this->_health = 100;
	this->_energy = 100;
	this->_attack = 30;
	std::cout << "ClapTrap default constructor called." << std::endl;
}

FragTrap::FragTrap(std::string name)
: ClapTrap(name)
{
	this->_name = name;
	this->_health = 100;
	this->_energy = 100;
	this->_attack = 30;
	this->printAction("FragTrap ", this->_name, " default constructor called (with name).");
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap destructor called." << std::endl;
}

void	FragTrap::highFiveGuys(void)
{
	if (this->_health == 0 || this->_energy == 0)
		return (this->printAction("FragTrap ", this->_name, " wants to High-Five, but he's dead or out of energy."));
	else
	{
		this->_energy--;
		return (this->printAction("FragTrap ", this->_name, " raises his hand for a High-Five !"));
	}
}
