/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <cedmulle@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 17:37:50 by cedmulle          #+#    #+#             */
/*   Updated: 2024/02/22 20:26:57 by cedmulle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// COPLIEN FORM ////////////////////////////////////////////////////////////////
ScavTrap::ScavTrap(void)
: ClapTrap()
{
	this->_hp = 100;
	this->_en = 50;
	this->_ap = 20;
	std::cout << "ScavTrap default constructor called." << std::endl;
	return ;
}

ScavTrap::ScavTrap(const std::string name)
: ClapTrap(name)
{
	this->_name = name;
	this->_hp = 100;
	this->_en = 50;
	this->_ap = 20;
	std::cout << "ScavTrap " << this->_name << " constructor called." << std::endl;
	return ;
}

ScavTrap::ScavTrap(const ScavTrap &c)
{
	this->_name = c._name;
	this->_hp = c._hp;
	this->_en = c._en;
	this->_ap = c._ap;
	std::cout << "ScavTrap " << this->_name << " copy constructor called." << std::endl;
	return ;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &c)
{
	this->_name = c._name;
	this->_hp = c._hp;
	this->_en = c._en;
	this->_ap = c._ap;
	return (*this);
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap " << this->_name << " destructor called." << std::endl;
	return ;
}
////////////////////////////////////////////////////////////////////////////////

void	ScavTrap::attack(const std::string &target)
{
	if (!this->_hp || !this->_en)
	{
		std::cout << "ScavTrap " << this->_name << " tried to attack ";
		std::cout << target << ", but he's dead" << std::endl;
		return ;
	}
	else
	{
		this->_en--;
		std::cout << "ScavTrap " << this->_name << " attack ";
		std::cout << target << " with " << this->_ap;
		std::cout << " attack points." << std::endl;
		return ;
	}
}

void ScavTrap::takeDamage(unsigned int amount)
{
	if (this->_hp == 0)
	{
		std::cout << "ScavTrap " << this->_name;
		std::cout << " took damage, but he's already dead." << std::endl;
		return ;
	}
	else
	{
		(amount > this->_hp) ? this->_hp = 0 : this->_hp -= amount;
		std::cout << "ScavTrap " << this->_name << " took ";
		std::cout << amount << " damage." << std::endl;
		return ;
	}
}

void ScavTrap::beRepaired(unsigned int amount)
{
	if (this->_hp == 0 || this->_en == 0)
	{
		std::cout << "ScavTrap " << this->_name;
		std::cout << " can't be repaired (no energy or is dead)." << std::endl;
		return ;
	}
	else
	{
		this->_en--;
		((amount + this->_hp) > this->_hp) ? this->_hp = 10 : this->_hp += amount;
		std::cout << "ScavTrap " << this->_name << " repaired ";
		std::cout << amount << " points." << std::endl;
		return ;
	}
}

void	ScavTrap::guardGate()
{
	if (!this->_hp)
	{
		std::cout << "ScavTrap " << this->_name << " wants to guard the gate, but he's dead." << std::endl;
		return ;
	}
	else
	{
		std::cout << "ScavTrap " << this->_name << " is now in Gate Keeper mode." << std::endl;
		return ;
	}
}
