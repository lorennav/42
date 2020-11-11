/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvieira <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 16:49:26 by lvieira           #+#    #+#             */
/*   Updated: 2020/11/03 18:16:50 by lvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	char	*dest_cpy;

	dest_cpy = dest;
	while (*dest_cpy != '\0')
	{
		dest_cpy++;
	}
	while (*src != '\0')
	{
		*dest_cpy++ = *src++;
	}
	*dest_cpy = '\0';
	return (dest);
}
