/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolkau <gvardovski@icloud.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 13:18:15 by svolkau           #+#    #+#             */
/*   Updated: 2026/01/16 13:44:27 by svolkau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/ClapTrap.hpp"

int main(void)
{
	ClapTrap clap("CL4P-TP");

	clap.attack("Target1");
	clap.takeDamage(5);
	clap.beRepaired(3);
	clap.takeDamage(8);
	clap.attack("Target2");
	clap.beRepaired(10);

	return 0;
}