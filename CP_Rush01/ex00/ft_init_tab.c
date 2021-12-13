/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcharpen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 13:33:42 by tcharpen          #+#    #+#             */
/*   Updated: 2021/09/12 23:15:20 by tcharpen         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	**ft_init_tab(void)
{
	int		i;
	int		j;
	char	**tab;

	tab = malloc(sizeof(char *) * 5);
	i = -1;
	while (++i < 4)
		tab[i] = malloc(sizeof(char) * 5);
	tab[i] = 0;
	i = -1;
	while (++i < 4)
	{
		j = -1;
		while (++j < 4)
			tab[i][j] = 48;
		tab[i][j] = 0;
	}
	return (tab);
}
