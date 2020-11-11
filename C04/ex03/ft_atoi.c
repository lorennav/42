/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvieira <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 22:02:09 by lvieira           #+#    #+#             */
/*   Updated: 2020/11/04 11:33:11 by lvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int		number;
	int		sign;

	number = 0;
	sign = 1;
	while (*str && (*str == ' ' || *str == '\n' || *str == '\t' ||
				*str == '\v' || *str == '\f' || *str == '\r'))
	{
		str++;
	}
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= (-1);
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		number = number * 10 + ((*str) - '0');
		str++;
	}
	return (number * sign);
}
