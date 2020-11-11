/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvieira <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 00:23:45 by lvieira           #+#    #+#             */
/*   Updated: 2020/11/05 15:22:42 by lvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_recursive_factorial(int nb)
{
	int		result;

	result = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	if (nb == 1)
	{
		return (1);
	}
	else
		return (nb * ft_recursive_factorial(nb - 1));
}
