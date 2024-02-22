/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <cedmulle@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 13:25:11 by cedmulle          #+#    #+#             */
/*   Updated: 2024/02/22 07:02:31 by cedmulle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// PRINTER FUNCTION ////////////////////////////////////////////////////////////
void	ClapTrap::printAction(const std::string type, const std::string entity, const std::string message)
{
	std::cout << type << MAG << entity << RST << message << std::endl;
	return ;
}

void	ClapTrap::printInfos(void)
{
	std::cout << GRY "INFOS OF " CYA << this->_name << std::endl;
	std::cout << GRY "name:\t" RST << this->_name << std::endl;
	std::cout << GRY "health:\t" RST << this->_health << std::endl;
	std::cout << GRY "energy:\t" RST << this->_energy << std::endl;
	std::cout << GRY "attack:\t" RST << this->_attack << std::endl;
	std::cout << std::endl;
}
///////////////////////////////////////////////////////////////////////////////

// CONSTRUCTORS AND DESTRUCTOR /////////////////////////////////////////////////
ClapTrap::ClapTrap(void)
: _name("DefaultName"), _health(10), _energy(10), _attack(0), _target(nullptr)
{
	std::cout << "ClapTrap default constructor called." << std::endl;
}

ClapTrap::ClapTrap(const std::string name)
: _name(name), _health(10), _energy(10), _attack(0), _target(nullptr)
{
	this->printAction("ClapTrap ", this->_name, " default constructor called (with name).");
}

ClapTrap::ClapTrap(const ClapTrap &c)
: _name(c._name), _health(c._health), _energy(c._energy), _attack(c._attack), _target(c._target)
{
	this->printAction("ClapTrap ", this->_name, " copy constructor called.");
}

ClapTrap::~ClapTrap(void)
{
	this->printAction("ClapTrap ", this->_name, " destructor called.");
}
///////////////////////////////////////////////////////////////////////////////

// SURCHARGE OPERATOR  ////////////////////////////////////////////////////////
ClapTrap& ClapTrap::operator=(const ClapTrap &c)
{
	this->_name = c._name;
	this->_health = c._health;
	this->_energy = c._energy;
	this->_attack = c._attack;
	return (*this);
}
///////////////////////////////////////////////////////////////////////////////

// PUBLIC METHODS /////////////////////////////////////////////////////////////
void	ClapTrap::setTarget(ClapTrap *target)
{
	this->_target = target;
	return ;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	this->printAction("ClapTrap ", this->_name, " takes damage:");

	if (this->_health == 0)
		return (printAction("ClapTrap ", this->_name, " is already dead. Leave him alone ! No damage added."));
	
	(amount > this->_health) ? this->_health = 0 : this->_health -= amount;
	std::cout << MAG << this->_name << RST << " take " YEL << amount << RST " of damage." << std::endl;
	
	return ;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	this->printAction("ClapTrap ", this->_name, " tries to heal himself");
	
	((amount + this->_health) > 10) ? this->_health = 10 : this->_health += amount;
	std::cout << MAG << this->_name << RST " restore " YEL << amount << RST " of health points.";
	
	return ;
}

void	ClapTrap::attack(const std::string &target)
{
	this->printAction("ClapTrap ", this->_name, " tries to attack:");
	
	if (!this->_energy || !this->_health)
		return (this->printAction("ClapTrap ", this->_name, " does not have energy, or is dead. Can't attack."));
	if (this->_target == nullptr)
		return (this->printAction("ClapTrap ", this->_name, " has no target defined. Can't attack."));
	if (this->_target->_name != target)
		return (this->printAction("ClapTrap ", this->_name, " " YEL + target + RST " isn't his target. Can't attack."));
	
	this->_energy--;
	
	std::cout << "ClapTrap " MAG << this->_name << RST " attacks " MAG  << target;
	std::cout << RST " causing " YEL << this->_attack << RST " points of damage. ";
	std::cout << std::endl;
	
	this->_target->takeDamage(this->_attack);
}
///////////////////////////////////////////////////////////////////////////////
