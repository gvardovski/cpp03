/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolkau <gvardovski@icloud.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 13:18:15 by svolkau           #+#    #+#             */
/*   Updated: 2026/01/17 17:11:06 by svolkau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/FragTrap.hpp"

int main(void)
{
	FragTrap frag("FR4G-TP");

	frag.attack("Target Dummy");
	frag.takeDamage(20);
	frag.beRepaired(10);
	frag.highFivesGuys();

	return (0);
}

