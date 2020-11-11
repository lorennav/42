/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvieira <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/27 23:13:32 by lvieira           #+#    #+#             */
/*   Updated: 2020/10/27 23:21:00 by lvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int a;
	int b;
	int temp;

	a = 0;
	while (a < size - 1)
	{
		b = 0;
		while (b < size - a - 1)
		{
			if (tab[b] > tab[b + 1])
			{
				temp = tab[b];
				tab[b] = tab[b + 1];
				tab[b + 1] = temp;
			}
			b++;
		}
		a++;
	}
}
