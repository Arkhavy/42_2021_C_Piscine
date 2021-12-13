/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljohnson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 10:33:15 by ljohnson          #+#    #+#             */
/*   Updated: 2021/09/22 12:15:37 by ljohnson         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	x;

	x = 0;
	while (str[x])
	{
		x++;
	}
	return (x);
}

char	*ft_build_dest(int size, char **strs, char *sep)
{
	int		a;
	int		length;
	char	*dest;

	a = 0;
	length = 0;
	while (a < size)
	{
		length += ft_strlen(strs[a]);
		a++;
	}
	length += (ft_strlen(sep) * (size - 1)) + 1;
	if (size <= 0)
		length = 1;
	dest = malloc(sizeof(*dest) * length);
	if (!dest)
		return (0);
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		a;
	int		b;
	int		c;
	char	*dest;

	dest = ft_build_dest(size, strs, sep);
	a = -1;
	b = 0;
	while (++a < size)
	{
		c = 0;
		while (strs[a][c])
		{
			dest[b++] = strs[a][c];
			c++;
		}
		c = 0;
		while (sep[c] && a != size - 1)
		{
			dest[b++] = sep[c];
			c++;
		}
	}
	dest[b] = '\0';
	return (dest);
}
