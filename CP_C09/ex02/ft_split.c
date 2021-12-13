/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljohnson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 12:02:38 by ljohnson          #+#    #+#             */
/*   Updated: 2021/09/23 09:15:35 by ljohnson         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_sep(char c, char *charset)
{
	int	a;

	a = 0;
	while (charset[a])
	{
		if (charset[a] == c)
			return (1);
		a++;
	}
	return (0);
}

int	count_args(char *str, char *charset)
{
	int	a;
	int	nb_args;

	a = 0;
	nb_args = 0;
	while (str[a])
	{
		if (a == 0)
		{
			if (!is_sep(str[a], charset))
				nb_args++;
		}
		else
		{
			if (is_sep(str[a - 1], charset) && !is_sep(str[a], charset))
				nb_args++;
		}
		a++;
	}
	return (nb_args);
}

char	*ft_strdup(char *src, char *charset)
{
	int		a;
	char	*dup;

	a = 0;
	while (src[a] && !is_sep(src[a], charset))
		a++;
	dup = malloc(sizeof(*dup) * (a + 1));
	if (!dup)
		return (0);
	a = 0;
	while (src[a] && !is_sep(src[a], charset))
	{
		dup[a] = src[a];
		a++;
	}
	dup[a] = '\0';
	return (dup);
}

char	**ft_split(char *str, char *charset)
{
	int		a;
	int		nb_args;
	char	**result;

	a = 0;
	nb_args = count_args(str, charset);
	result = malloc(sizeof(*result) * (nb_args + 1));
	if (!result)
		return (0);
	while (*str)
	{
		if (!is_sep(*str, charset))
		{
			result[a] = ft_strdup(str, charset);
			a++;
			while (*str && !is_sep(*str, charset))
				str++;
		}
		str++;
	}
	result[a] = 0;
	return (result);
}
