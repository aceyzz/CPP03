/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <cedmulle@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 17:53:19 by cedmulle          #+#    #+#             */
/*   Updated: 2024/02/22 20:32:08 by cedmulle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

// COPLIEN FORM ////////////////////////////////////////////////////////////////
FragTrap::FragTrap(void)
: ClapTrap()
{
	this->_hp = 100;
	this->_en = 100;
	this->_ap = 30;
	std::cout << "FragTrap default constructor called." << std::endl;
	return ;
}

FragTrap::FragTrap(const std::string name)
: ClapTrap(name)
{
	this->_name = name;
	this->_hp = 100;
	this->_en = 100;
	this->_ap = 30;
	std::cout << "FragTrap " << this->_name << " constructor called." << std::endl;
	return ;
}

FragTrap::FragTrap(const FragTrap &c)
{
	this->_name = c._name;
	this->_hp = c._hp;
	this->_en = c._en;
	this->_ap = c._ap;
	std::cout << "FragTrap " << this->_name << " copy constructor called." << std::endl;
	return ;
}

FragTrap& FragTrap::operator=(const FragTrap &c)
{
	this->_name = c._name;
	this->_hp = c._hp;
	this->_en = c._en;
	this->_ap = c._ap;
	return (*this);
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap " << this->_name << " destructor called." << std::endl;
	return ;
}
////////////////////////////////////////////////////////////////////////////////

void	FragTrap::attack(const std::string &target)
{
	if (!this->_hp || !this->_en)
	{
		std::cout << "FragTrap " << this->_name << " tried to attack ";
		std::cout << target << ", but he's dead" << std::endl;
		return ;
	}
	else
	{
		this->_en--;
		std::cout << "FragTrap " << this->_name << " attack ";
		std::cout << target << " with " << this->_ap;
		std::cout << " attack points." << std::endl;
		return ;
	}
}

void FragTrap::takeDamage(unsigned int amount)
{
	if (this->_hp == 0)
	{
		std::cout << "FragTrap " << this->_name;
		std::cout << " took damage, but he's already dead." << std::endl;
		return ;
	}
	else
	{
		(amount > this->_hp) ? this->_hp = 0 : this->_hp -= amount;
		std::cout << "FragTrap " << this->_name << " took ";
		std::cout << amount << " damage." << std::endl;
		return ;
	}
}

void FragTrap::beRepaired(unsigned int amount)
{
	if (this->_hp == 0 || this->_en == 0)
	{
		std::cout << "FragTrap " << this->_name;
		std::cout << " can't be repaired (no energy or is dead)." << std::endl;
		return ;
	}
	else
	{
		this->_en--;
		((amount + this->_hp) > this->_hp) ? this->_hp = 10 : this->_hp += amount;
		std::cout << "FragTrap " << this->_name << " repaired ";
		std::cout << amount << " points." << std::endl;
		return ;
	}
}

void	FragTrap::highFiveGuys()
{
	if (!this->_hp)
		std::cout << "FragTrap " << this->_name << " wants to high five, but he's dead." << std::endl;
	else
		std::cout << "FragTrap " << this->_name << " raises his hand for a high five !" << std::endl;
	return ;
}

