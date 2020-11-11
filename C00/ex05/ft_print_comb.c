/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvieira <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 13:27:04 by lvieira           #+#    #+#             */
/*   Updated: 2020/10/26 15:57:44 by lvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(int i, int x, int y)
{
	write(1, &i, 1);
	write(1, &x, 1);
	write(1, &y, 1);
	if (i == 55 && x == 56 && y == 57)
		;
	else
		write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	char	i;
	char	x;
	char	y;

	i = 48;
	while (i < 56)
	{
		x = i + 1;
		while (x < 57)
		{
			y = x + 1;
			while (y <= 57)
			{
				if (i != x && i != y && x != y)
					ft_print(i, x, y);
				y++;
			}
			x++;
		}
		i++;
	}
}
