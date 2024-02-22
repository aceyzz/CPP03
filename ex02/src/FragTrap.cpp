/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <cedmulle@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 07:12:58 by cedmulle          #+#    #+#             */
/*   Updated: 2024/02/22 07:29:22 by cedmulle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name)
{
	this->_name = name;
	this->_health = 100;
	this->_energy = 100;
	this->_attack = 30;
	this->_target = nullptr;
	this->printAction("FragTrap ", this->_name, " default constructor called (with name).");
}

FragTrap::FragTrap(const FragTrap &f)
{
	this->_name = f._name;
	this->_health = f._health;
	this->_energy = f._energy;
	this->_attack = f._attack;
	this->_target = f._target;
	this->printAction("FragTrap ", this->_name, " copy constructor called.");
}

FragTrap& FragTrap::operator=(const FragTrap &f)
{
	this->_name = f._name;
	this->_health = f._health;
	this->_energy = f._energy;
	this->_attack = f._attack;
	this->_target = f._target;
	return (*this);
}

FragTrap::~FragTrap(void)
{
	this->printAction("FragTrap ", this->_name, " destructor called.");
}

void	FragTrap::setTarget(FragTrap *target)
{
	this->_target = target;
}

void	FragTrap::highFiveGuys(void)
{
	if (this->_health == 0)
		return (this->printAction("FragTrap ", this->_name, " wants to High-Five, but he's dead."));
	else
		return (this->printAction("FragTrap ", this->_name, " raises his hand for a High-Five !"));
}

void	FragTrap::attack(const std::string &target)
{
	this->printAction("FragTrap ", this->_name, " tries to attack:");
	
	if (!this->_energy || !this->_health)
		return (this->printAction("FragTrap ", this->_name, " does not have energy, or is dead. Can't attack."));
	if (this->_target == nullptr)
		return (this->printAction("FragTrap ", this->_name, " has no target defined. Can't attack."));
	
	this->_energy--;
	
	std::cout << "FragTrap " MAG << this->_name << RST " attacks " MAG  << target;
	std::cout << RST " causing " YEL << this->_attack << RST " points of damage. ";
	std::cout << std::endl;
	
	this->_target->takeDamage(this->_attack);
}
