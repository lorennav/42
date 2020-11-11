/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvieira <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 00:23:08 by lvieira           #+#    #+#             */
/*   Updated: 2020/11/05 00:54:29 by lvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	write(1, str, i);
}

int		main(int argc, char **argv)
{
	int		a;

	a = argc - 1;
	while (a > 0)
	{
		ft_putstr(argv[a]);
		write(1, "\n", 1);
		a--;
	}
	return (0);
}
