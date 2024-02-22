/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <cedmulle@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 05:41:46 by cedmulle          #+#    #+#             */
/*   Updated: 2024/02/22 06:58:40 by cedmulle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class	ScavTrap : public ClapTrap
{
	public:
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &s);
		ScavTrap &operator=(const ScavTrap &s);
		~ScavTrap();

		void attack(const std::string &target);
		void setTarget(ScavTrap *target);
		void guardGate(void);
	private:
		ScavTrap(void);
		ScavTrap *_target;
};

#endif
