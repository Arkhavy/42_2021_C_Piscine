/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljohnson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 08:48:04 by ljohnson          #+#    #+#             */
/*   Updated: 2021/09/15 08:34:12 by ljohnson         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		a;
	int		b;
	char	*dest;

	a = 0;
	b = 0;
	while (src[a])
		a++;
	dest = malloc(sizeof(*dest) * a);
	if (!dest)
		return (NULL);
	while (b < a)
	{
		dest[b] = src[b];
		b++;
	}
	dest[b] = '\0';
	return (dest);
}
