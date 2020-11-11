/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvieira <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 11:13:12 by lvieira           #+#    #+#             */
/*   Updated: 2020/11/08 14:42:49 by lvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int	size_arr;
	int	*arr;
	int i;

	i = 0;
	size_arr = max - min;
	arr = (int*)malloc(sizeof(*arr) * size_arr);
	if (min >= max)
		return (0);
	while (max > min)
	{
		arr[i] = min;
		min++;
		i++;
	}
	return (arr);
}
