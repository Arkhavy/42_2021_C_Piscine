/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cond.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njaros <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 15:37:40 by njaros            #+#    #+#             */
/*   Updated: 2021/09/21 19:32:12 by ljohnson         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "bsqlib.h"

int	cond(t_point *point, int size)
{
	int	i;
	int	x;
	int	y;

	x = point->x;
	y = point->y;
	i = 0;
	if (y + size > maxy(point) + 1)
		return (-2);
	if (x + size > maxx(point) + 1)
		return (-1);
	while ((point->y < size + y) && (point->pouet))
	{
		while ((point->x < size + x) && (point->pouet))
		{
			if (point->c != point->pouet[1])
			{
				return (0);
			}
			point++;
		}
		point = incr_y(point, x);
	}
	return (1);
}
