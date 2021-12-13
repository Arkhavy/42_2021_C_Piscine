/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_struct.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njaros <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 17:29:29 by njaros            #+#    #+#             */
/*   Updated: 2021/09/21 19:44:31 by ljohnson         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "bsqlib.h"

long	ft_atoi(char *str)
{
	int		i;
	int		j;
	long	n;

	i = 0;
	j = 1;
	n = 0;
	while ((str[i] > 8 && str[i] < 14) || str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			j = -j;
		i++;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		n = n * 10 + (str[i] - '0');
		i++;
	}
	n = n * j;
	return (n);
}

void	fillxyc(t_point *point, int pos, int size, char **c)
{
	int	i;
	int	j;

	i = pos / size;
	point->y = i;
	j = pos % size;
	point->x = j;
	point->c = c[i][j];
}

t_point	*ft_struct(char **srcs)
{
	int				i;
	int				j;
	t_point			*tab;

	i = 0;
	j = 0;
	tab = malloc(sizeof(t_point) * ft_strlen(srcs[1]) * (ft_atoi(srcs[0])) + 1);
	while ((srcs[0][j] >= '0') && (srcs[0][j] <= '9'))
		j++;
	while (i < ((ft_strlen(srcs[1]) * (ft_atoi(srcs[0])))))
	{
		tab[i].pouet = malloc(sizeof(char) * ft_strlen(&srcs[0][j]) + 1);
		ft_strcpy(tab[i].pouet, &srcs[0][j - 1]);
		fillxyc(&tab[i], i, (ft_strlen(srcs[1])), &srcs[1]);
		i++;
	}
	tab[i].pouet = NULL;
	ft_free(srcs);
	return (&tab[0]);
}
