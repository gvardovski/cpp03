/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolkau <gvardovski@icloud.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 13:18:15 by svolkau           #+#    #+#             */
/*   Updated: 2026/01/17 17:46:04 by svolkau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap	dia("Diamondy");

	dia.attack("SomeTarget");
	dia.takeDamage(30);
	dia.beRepaired(20);
	dia.highFivesGuys();
	dia.guardGate();
	dia.whoAmI();
	return (0);
}


