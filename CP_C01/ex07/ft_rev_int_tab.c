/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljohnson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 10:24:51 by ljohnson          #+#    #+#             */
/*   Updated: 2021/09/05 10:42:18 by ljohnson         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	a;
	int	b;

	a = size / 2 - 1;
	size--;
	while (a >= 0)
	{
		b = tab[a];
		tab[a] = tab [size - a];
		tab[size - a] = b;
		a--;
	}
}
