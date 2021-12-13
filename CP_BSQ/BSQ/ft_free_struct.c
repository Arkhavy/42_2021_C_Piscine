/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_struct.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njaros <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 18:24:14 by njaros            #+#    #+#             */
/*   Updated: 2021/09/21 18:24:17 by njaros           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "bsqlib.h"

void	ft_free_struct(t_point *tab)
{
	int	i;

	i = 0;
	while (tab[i].pouet)
	{
		free (tab[i].pouet);
		i++;
	}
	free (tab);
}