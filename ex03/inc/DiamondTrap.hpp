/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <cedmulle@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 18:00:40 by cedmulle          #+#    #+#             */
/*   Updated: 2024/02/22 18:03:56 by cedmulle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class	DiamondTrap : virtual public ScavTrap, virtual public FragTrap
{
	public:
		DiamondTrap(std::string name);
		~DiamondTrap(void);
		using ScavTrap::attack;
		void whoAmI(void);
	private:
		std::string _name;
};

#endif
