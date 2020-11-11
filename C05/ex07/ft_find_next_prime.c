/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvieira <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 22:13:51 by lvieira           #+#    #+#             */
/*   Updated: 2020/11/05 18:04:31 by lvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int		ft_is_prime(int nb)
{
	long long	i;
	long long	d;

	i = 2;
	d = 0;
	if (nb == 0 || nb == 1 || nb < 0)
		return (0);
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int				ft_find_next_prime(int nb)
{
	long long	i;

	i = 1;
	if (ft_is_prime(nb))
		return (nb);
	while (!ft_is_prime(nb + i))
	{
		i++;
	}
	return (nb + i);
}
