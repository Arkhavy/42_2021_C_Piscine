/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljohnson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 14:54:11 by ljohnson          #+#    #+#             */
/*   Updated: 2021/09/07 14:38:55 by ljohnson         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	src_length(char *c)
{
	int	b;

	b = 0;
	while (c[b])
		b++;
	return (b);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	a;
	unsigned int	length;

	a = -1;
	length = src_length(src);
	if (size > 0)
	{
		if (length + 1 < size)
		{
			while (++a < length + 1)
				dest[a] = src[a];
		}
		else if (size)
		{
			while (++a < size - 1)
				dest[a] = src[a];
			dest[a] = '\0';
		}
	}
	return (length);
}
