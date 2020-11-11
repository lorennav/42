/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvieira <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 12:52:33 by lvieira           #+#    #+#             */
/*   Updated: 2020/11/05 11:07:25 by lvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	int		result;

	result = 1;
	if (power < 0)
		return (0);
	if (power == 0 && nb == 0)
		return (1);
	if (power != 0)
	{
		result = nb * ft_recursive_power(nb, power - 1);
	}
	return (result);
}
