/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljohnson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 08:57:48 by ljohnson          #+#    #+#             */
/*   Updated: 2021/09/15 17:02:20 by ljohnson         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	a;
	int	*tab;

	a = 0;
	if (min >= max)
		return (NULL);
	tab = malloc(sizeof(*tab) * (max - min));
	while (min < max)
	{
		tab[a] = min;
		a++;
		min++;
	}
	return (tab);
}
