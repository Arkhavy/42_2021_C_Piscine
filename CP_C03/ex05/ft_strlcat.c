/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljohnson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 10:27:34 by ljohnson          #+#    #+#             */
/*   Updated: 2021/09/08 12:23:55 by ljohnson         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	a;
	unsigned int	b;
	unsigned int	c;

	a = 0;
	b = 0;
	c = 0;
	while (src[a])
		a++;
	if (size == 0)
		return (a);
	while (dest[b])
		b++;
	if (size <= b)
		return (size + a);
	while (size && (--size - b) && src[c])
	{
		dest[b + c] = src[c];
		c++;
	}
	dest[b + c] = '\0';
	return (a + b);
}
