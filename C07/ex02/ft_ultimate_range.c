/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvieira <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 12:15:44 by lvieira           #+#    #+#             */
/*   Updated: 2020/11/08 16:21:54 by lvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int	*arr;
	int i;
	int size_arr;

	i = 0;
	size_arr = max - min;
	arr = (int*)malloc(sizeof(*arr) * size_arr);
	if (min >= max)
	{
		*range = (void*)0;
		return (0);
	}
	while (max > min)
	{
		arr[i] = min;
		min++;
		i++;
	}
	*range = arr;
	return (i);
}
