/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolkau <gvardovski@icloud.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 13:46:21 by svolkau           #+#    #+#             */
/*   Updated: 2026/01/17 16:50:25 by svolkau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ScavTrap.hpp"

ScavTrap::ScavTrap(std::string const name) : ClapTrap(name), _guardMode(false)
{
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "ScavTrap " << this->_name << " has been created!" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &src) : ClapTrap(src), _guardMode(src._guardMode)
{
	std::cout << "ScavTrap " << this->_name << " has been created by copy!" <<  std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->_name << " has been destroyed!" << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &rhs)
{
	std::cout << "ScavTrap Assignation operator called" << std::endl;
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_hitPoints = rhs._hitPoints;
		this->_energyPoints = rhs._energyPoints;
		this->_attackDamage = rhs._attackDamage;
		this->_guardMode = rhs._guardMode;
	}
	return *this;
}

void ScavTrap::guardGate()
{
	if (!this->_guardMode)
	{
		this->_guardMode = true;
		std::cout << "ScavTrap " << this->_name << " is now in Gate Keeper mode." << std::endl;
	}
	else
	{
		this->_guardMode = false;
		std::cout << "ScavTrap " << this->_name << " has exited Gate Keeper mode." << std::endl;
	}
}


void ScavTrap::attack(const std::string &target)
{
	if (this->_energyPoints > 0 && this->_hitPoints > 0)
	{
		this->_energyPoints--;
		std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
	}
	else
		std::cout << "ScavTrap " << this->_name << " has no energy or hit points left to attack!" << std::endl;
}	