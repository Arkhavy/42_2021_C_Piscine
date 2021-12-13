/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljohnson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 10:42:53 by ljohnson          #+#    #+#             */
/*   Updated: 2021/09/05 11:59:14 by ljohnson         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	a;
	int	b;
	int	c;

	b = size;
	while (b > 0)
	{
		a = size - 2;
		while (a >= 0)
		{
			if (tab[a] > tab[a + 1])
			{
				c = tab[a];
				tab[a] = tab [a + 1];
				tab [a + 1] = c;
			}
			a--;
		}
		b--;
	}
}
