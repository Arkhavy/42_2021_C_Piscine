/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljohnson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 15:16:52 by ljohnson          #+#    #+#             */
/*   Updated: 2021/09/12 23:16:49 by tcharpen         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	**ft_split(char *str, int size)
{
	char	**split;
	int		i;
	int		j;
	int		index;

	split = malloc(sizeof(char *) * 5);
	i = -1;
	while (++i < 4)
		split[i] = malloc(sizeof(char) * 5);
	split[i] = 0;
	index = 0;
	i = 0;
	while (i < size)
	{
		j = -1;
		while (++j < 4)
		{
			split[index][j] = str[i];
			i += 2;
		}
		split[index++][j] = 0;
	}
	return (split);
}
