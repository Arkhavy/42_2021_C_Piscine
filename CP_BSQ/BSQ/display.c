/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njaros <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 18:33:17 by njaros            #+#    #+#             */
/*   Updated: 2021/09/21 19:37:42 by ljohnson         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "bsqlib.h"

void	fill_square(t_point *tab, int x, int y, int size)
{
	int	x0;
	int	y0;

	while ((tab->x != x) || (tab->y != y))
		tab++;
	x0 = tab->x;
	y0 = tab->y;
	while ((tab->y < size + y0) && (tab->pouet))
	{
		while (tab->x < size + x0)
		{
			tab->c = tab->pouet[3];
			tab++;
		}
		tab = incr_y(tab, x0);
	}
}

void	display(t_point *tab, int x, int y, int size)
{
	int	i;

	i = 0;
	while (!((tab->x == 0) && (tab->y == 0)))
		tab--;
	fill_square(tab, x, y, size);
	while (tab[i].pouet)
	{
		if ((tab[i + 1].y) > (tab[i].y))
		{
			ft_putchar(tab[i].c);
			ft_putchar('\n');
		}
		else
			ft_putchar(tab[i].c);
		i++;
	}
	ft_putchar('\n');
	ft_free_struct(tab);
}
