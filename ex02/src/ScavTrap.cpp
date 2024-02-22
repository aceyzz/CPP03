/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <cedmulle@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 05:51:31 by cedmulle          #+#    #+#             */
/*   Updated: 2024/02/22 06:56:50 by cedmulle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	this->_name = "DefaultName";
	this->_health = 100;
	this->_energy = 50;
	this->_attack = 20;
	this->_target = nullptr;
	std::cout << "ScavTrap " << MAG << this->_name << RST;
	std::cout << " default constructor called." << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	this->_name = name;
	this->_health = 100;
	this->_energy = 50;
	this->_attack = 20;
	this->_target = nullptr;
	std::cout << "ScavTrap " << MAG << this->_name << RST;
	std::cout << " constructor called (with name)." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &s)
{
	this->_name = s._name;
	this->_health = s._health;
	this->_energy = s._energy;
	this->_attack = s._attack;
	this->_target = s._target;
	std::cout << "ScavTrap " << MAG << this->_name << RST;
	std::cout << " copy assignment constructor called." << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &s)
{
	this->_name = s._name;
	this->_health = s._health;
	this->_energy = s._energy;
	this->_attack = s._attack;
	this->_target = s._target;
	return (*this);
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap " << MAG << this->_name << RST;
	std::cout << " destructor called." << std::endl;
}

void	ScavTrap::setTarget(ScavTrap *target)
{
	this->_target = target;
}

void	ScavTrap::attack(const std::string &target)
{
	this->printAction("ScavTrap ", this->_name, " tries to attack:");
	
	if (!this->_energy || !this->_health)
		return (this->printAction("ScavTrap ", this->_name, " does not have energy, or is dead. Can't attack."));
	if (this->_target == nullptr)
		return (this->printAction("ScavTrap ", this->_name, " has no target defined. Can't attack."));
	if (this->_target->_name != target)
		return (this->printAction("ScavTrap ", this->_name, " - " YEL + target + RST " - isn't his target. Can't attack."));
	
	this->_energy--;
	
	std::cout << "ScavTrap " MAG << this->_name << RST " attacks " MAG  << target;
	std::cout << RST " causing " YEL << this->_attack << RST " points of damage. ";
	std::cout << std::endl;
	
	this->_target->takeDamage(this->_attack);
}

void	ScavTrap::guardGate(void)
{
	return (this->printAction("ScavTrap ", this->_name, " is now in Gate keeper mode."));
}
