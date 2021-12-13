/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   recu.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njaros <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 14:05:27 by njaros            #+#    #+#             */
/*   Updated: 2021/09/21 19:49:50 by ljohnson         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "bsqlib.h"

int	recu(t_point *tab, int x, int y, int size)
{
	if ((cond(tab, size + 1)) == -2)
	{
		display(tab, x, y, size);
		return (1);
	}
	if ((cond(tab, size + 1)) == -1)
	{
		tab = incr_y(tab, 0);
		recu(tab, x, y, size);
		return (0);
	}
	if ((cond(tab, size + 1)) == 0)
	{
		recu(tab + 1, x, y, size);
	}
	if ((cond(tab, size + 1)) == 1)
	{
		x = tab->x;
		y = tab->y;
		size = gr(tab, size + 1);
		recu(tab + 1, x, y, size);
	}
	return (0);
}
