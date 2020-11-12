/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvieira <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 11:46:33 by lvieira           #+#    #+#             */
/*   Updated: 2020/11/12 14:55:12 by lvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			is_char_present(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

long long	ft_word_count(char *str, char *charset)
{
	long long w_count;

	w_count = 0;
	while (*str)
	{
		if (!is_char_present(*str, charset))
		{
			++w_count;
			while (*str && !is_char_present(*str, charset))
				++str;
		}
		++str;
	}
	return (w_count);
}

void		ft_strcpy(char *dst, char *from, char *until)
{
	while (from < until)
		*(dst++) = *(from++);
	*dst = 0;
}

char		**ft_split(char *str, char *charset)
{
	long long	index;
	char		*w_split;
	char		**arr_strs;
	long long	w;

	w = ft_word_count(str, charset);
	arr_strs = (char**)malloc(sizeof(*arr_strs) * w + 1);
	index = 0;
	while (*str)
	{
		if (!is_char_present(*str, charset))
		{
			w_split = str;
			while (*str && !is_char_present(*str, charset))
				++str;
			arr_strs[index] = (char*)malloc(str - w_split + 1);
			ft_strcpy(arr_strs[index], w_split, str);
			index++;
		}
		++str;
	}
	arr_strs[index] = 0;
	return (arr_strs);
}
