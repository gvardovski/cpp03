/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolkau <gvardovski@icloud.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 13:18:12 by svolkau           #+#    #+#             */
/*   Updated: 2026/01/16 14:13:00 by svolkau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_CLASS_CPP
#define CLAPTRAP_CLASS_CPP

#include <iostream>

class ClapTrap
{
	protected:
		std::string		_name;
		unsigned int	_hitPoints;
		unsigned int	_energyPoints;
		unsigned int	_attackDamage;
	
	public:
		ClapTrap(std::string const name);
		ClapTrap(ClapTrap const &src);
		~ClapTrap();

		ClapTrap &operator=(ClapTrap const &rhs);

		 void attack(const std::string& target);
		 void takeDamage(unsigned int amount);
		 void beRepaired(unsigned int amount);
		 
};

#endif