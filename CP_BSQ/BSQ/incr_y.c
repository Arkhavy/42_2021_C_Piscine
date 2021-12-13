/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   incr_y.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njaros <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 17:09:16 by njaros            #+#    #+#             */
/*   Updated: 2021/09/21 19:45:44 by ljohnson         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "bsqlib.h"

t_point	*incr_y(t_point *point, int x)
{
	int	temp;

	if (point->y == maxy(point))
	{
		while (point->pouet)
		{
			point++;
			return (point);
		}
	}
	temp = point->y;
	while (point->y == temp)
		point++;
	while (point->x != x)
		point++;
	return (point);
}
