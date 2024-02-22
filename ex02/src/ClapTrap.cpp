/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <cedmulle@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 14:55:08 by cedmulle          #+#    #+#             */
/*   Updated: 2024/02/22 17:15:19 by cedmulle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// COPLIEN FORM ////////////////////////////////////////////////////////////////
ClapTrap::ClapTrap(void)
: _hp(10), _en(10), _ap(0)
{
	std::cout << "ClapTrap default constructor called." << std::endl;
	return ;
}

ClapTrap::ClapTrap(const std::string name)
: _name(name), _hp(10), _en(10), _ap(0)
{
	std::cout << "ClapTrap " << this->_name << " constructor called." << std::endl;
	return ;
}

ClapTrap::ClapTrap(const ClapTrap &c)
: _name(c._name), _hp(c._hp), _en(c._en), _ap(c._ap)
{
	std::cout << "ClapTrap " << this->_name << " copy constructor called." << std::endl;
	return ;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &c)
{
	this->_name = c._name;
	this->_hp = c._hp;
	this->_en = c._en;
	this->_ap = c._ap;
	return (*this);
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap " << this->_name << " destructor called." << std::endl;
	return ;
}
////////////////////////////////////////////////////////////////////////////////

void ClapTrap::attack(const std::string &target)
{
	if (!this->_hp || !this->_en)
	{
		std::cout << "ClapTrap " << this->_name << " tried to attack ";
		std::cout << target << ", but he's dead" << std::endl;
		return ;
	}
	else
	{
		this->_en--;
		std::cout << "ClapTrap " << this->_name << " attack ";
		std::cout << target << " with " << this->_ap;
		std::cout << " attack points." << std::endl;
		return ;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hp == 0)
	{
		std::cout << "ClapTrap " << this->_name;
		std::cout << " took damage, but he's already dead." << std::endl;
		return ;
	}
	else
	{
		(amount > this->_hp) ? this->_hp = 0 : this->_hp -= amount;
		std::cout << "ClapTrap " << this->_name << " took ";
		std::cout << amount << " damage." << std::endl;
		return ;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hp == 0 || this->_en == 0)
	{
		std::cout << "ClapTrap " << this->_name;
		std::cout << " can't be repaired (no energy or is dead)." << std::endl;
		return ;
	}
	else
	{
		this->_en--;
		((amount + this->_hp) > this->_hp) ? this->_hp = 10 : this->_hp += amount;
		std::cout << "ClapTrap " << this->_name << " repaired ";
		std::cout << amount << " points." << std::endl;
		return ;
	}
}
