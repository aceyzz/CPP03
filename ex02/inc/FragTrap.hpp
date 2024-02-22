/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <cedmulle@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 07:08:28 by cedmulle          #+#    #+#             */
/*   Updated: 2024/02/22 07:27:09 by cedmulle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class	FragTrap : public ClapTrap
{
	public:
		FragTrap(std::string name);
		FragTrap(const FragTrap &f);
		FragTrap &operator=(const FragTrap &f);
		~FragTrap(void);

		void highFiveGuys(void);
		void setTarget(FragTrap *target);
		void attack(const std::string &target);
	private:
		FragTrap(void);
		FragTrap *target;
};

#endif
