/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolkau <gvardovski@icloud.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 13:18:15 by svolkau           #+#    #+#             */
/*   Updated: 2026/01/17 16:51:47 by svolkau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/ScavTrap.hpp"

int main()
{
	ScavTrap	scav("SC4V-TP");

	scav.attack("Target Dummy");
	scav.takeDamage(30);
	scav.beRepaired(20);
	scav.guardGate();
	return 0;
}