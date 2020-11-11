/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvieira <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 18:11:23 by lvieira           #+#    #+#             */
/*   Updated: 2020/11/01 18:38:34 by lvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*dest_cpy;

	dest_cpy = dest;
	while (*dest_cpy != '\0')
	{
		dest_cpy++;
	}
	while (*src != '\0' && nb > 0)
	{
		*dest_cpy++ = *src++;
		nb--;
	}
	*dest_cpy = '\0';
	return (dest);
}
