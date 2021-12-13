/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_resolve.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcharpen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 13:36:49 by tcharpen          #+#    #+#             */
/*   Updated: 2021/09/12 23:18:55 by tcharpen         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_switch_case(char **tab, int x, int y, char **str);
void	ft_display(char **tab);

int	ft_check_max_case(int x, int y, char **str)
{
	int	max;

	max = 4;
	if (x == 0 && max > 4 + 1 - (str[0][y] - 48))
		max = 4 + 1 - (str[0][y] - 48);
	if (y == 0 && max > 4 + 1 - (str[2][x] - 48))
		max = 4 + 1 - (str[2][x] - 48);
	if (x == 3 && max > 4 + 1 - (str[1][y] - 48))
		max = 4 + 1 - (str[1][y] - 48);
	if (y == 3 && max > 4 + 1 - (str[3][x] - 48))
		max = 4 + 1 - (str[3][x] - 48);
	return (max);
}

int	ft_checkline(char **tab, int x, int y)
{
	int	i;

	i = 4 - 1;
	while (i >= 0)
	{
		if (tab[x][y] == tab[x][i] && i != y)
			return (0);
		i --;
	}
	return (1);
}

int	ft_checkcolumn(char **tab, int x, int y)
{
	int	j;

	j = 4 - 1;
	while (j >= 0)
	{
		if (tab[x][y] == tab[j][y] && j != x)
			return (0);
		j --;
	}
	return (1);
}

int	ft_backtrack(char **tab, int x, int y, char **str)
{
	int	max;
	int	i;
	int	check;

	check = 0;
	i = 0;
	max = ft_check_max_case(x, y, str);
	while (++i <= max)
	{
		tab[x][y] = i + 48;
		if (ft_checkline(tab, x, y) == 1 && ft_checkcolumn(tab, x, y) == 1)
		{
			if (x == 2 && y == 1)
				return (1);
			check = ft_switch_case(tab, x, y, str);
			if (check == 1)
				return (1);
		}
	}
	tab[x][y] = 48;
	return (0);
}

void	ft_resolve(char **tab, char **str)
{
	if (ft_backtrack(tab, 0, 0, str))
		ft_display(tab);
	else
		write(1, "Error\n", 6);
	return ;
}
