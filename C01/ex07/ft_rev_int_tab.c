/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvieira <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/27 15:57:21 by lvieira           #+#    #+#             */
/*   Updated: 2020/10/27 17:04:51 by lvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int		i;
	int		new_tab;

	i = 0;
	while (i < size)
	{
		new_tab = tab[i];
		tab[i] = tab[size - 1];
		tab[size - 1] = new_tab;
		i++;
		size--;
	}
}
