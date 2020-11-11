/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvieira <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 12:17:45 by lvieira           #+#    #+#             */
/*   Updated: 2020/11/05 11:06:59 by lvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_iterative_power(int nb, int power)
{
	int		result;

	result = 1;
	if (power < 0)
		return (0);
	if (power == 0 && nb == 0)
		return (1);
	while (power != 0)
	{
		result = result * nb;
		power--;
	}
	return (result);
}
