/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvieira <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 22:02:12 by lvieira           #+#    #+#             */
/*   Updated: 2020/11/02 20:48:54 by lvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlen(char *dest)
{
	unsigned int	count;

	count = 0;
	while (dest[count] != '\0')
		count++;
	return (count);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	char			*backup_dest;
	char			*backup_src;
	unsigned int	backup_dest_length;
	unsigned int	remaining;

	backup_dest = dest;
	backup_src = src;
	remaining = size;
	while (remaining-- != 0 && *backup_dest != '\0')
		backup_dest++;
	backup_dest_length = backup_dest - dest;
	remaining = size - backup_dest_length;
	if (remaining == 0)
		return (backup_dest_length + ft_strlen(src));
	while (*src != '\0')
	{
		if (remaining > 1)
		{
			*backup_dest++ = *src;
			remaining--;
		}
		src++;
	}
	*backup_dest = '\0';
	return (backup_dest_length + (src - backup_src));
}
