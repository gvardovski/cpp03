/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolkau <gvardovski@icloud.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 13:46:24 by svolkau           #+#    #+#             */
/*   Updated: 2026/01/17 16:49:30 by svolkau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_CLASS_HPP
#define SCAVTRAP_CLASS_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	private:
		bool	_guardMode;

	public:
		ScavTrap(std::string const name);
		ScavTrap(ScavTrap const &src);
		~ScavTrap();

		ScavTrap &operator=(ScavTrap const &rhs);

		void attack(const std::string& target);
		void guardGate();
};

#endif