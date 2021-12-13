/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljohnson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 08:40:29 by ljohnson          #+#    #+#             */
/*   Updated: 2021/09/20 08:50:47 by ljohnson         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	a;

	a = 0;
	while (str[a])
		a++;
	return (a);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	a;

	a = 0;
	while (src[a])
	{
		dest[a] = src[a];
		a++;
	}
	dest[a] = '\0';
	return (dest);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*val;
	int			a;

	val = malloc(sizeof(t_stock_str) * (ac + 1));
	if (val == 0)
		return (0);
	a = 0;
	while (a < ac)
	{
		val[a].size = ft_strlen(av[a]);
		val[a].str = av[a];
		val[a].copy = malloc(sizeof(char) * (val[a].size + 1));
		if (val[a].copy == 0)
			return (0);
		ft_strcpy(val[a].copy, av[a]);
		a++;
	}
	val[a].str = 0;
	return (val);
}
