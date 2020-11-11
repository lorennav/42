/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvieira <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 16:34:00 by lvieira           #+#    #+#             */
/*   Updated: 2020/11/03 22:56:35 by lvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

static void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void			ft_putnbr(int nb)
{
	long int	longint_nbr;

	longint_nbr = nb;
	if (longint_nbr < 0)
	{
		longint_nbr = -longint_nbr;
		ft_putchar('-');
	}
	if (longint_nbr / 10)
		ft_putnbr(longint_nbr / 10);
	ft_putchar(longint_nbr % 10 + '0');
}
