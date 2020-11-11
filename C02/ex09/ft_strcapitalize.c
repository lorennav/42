/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvieira <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 17:46:34 by lvieira           #+#    #+#             */
/*   Updated: 2020/10/29 21:26:54 by lvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int		i;

	i = 0;
	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] = str[i] - 32;
	while (str[i] != '\0')
	{
		if (str[i + 1] >= 'A' && str[i + 1] <= 'Z')
			str[i + 1] = str[i + 1] + 32;
		if (!(str[i] >= '0' && str[i] <= '9'))
			if (!(str[i] >= 'a' && str[i] <= 'z'))
				if (!(str[i] >= 'A' && str[i] <= 'Z'))
					if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
					{
						str[i + 1] = str[i + 1] - 32;
					}
		i++;
	}
	return (str);
}
