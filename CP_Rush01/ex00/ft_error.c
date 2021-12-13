/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljohnson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 11:39:46 by ljohnson          #+#    #+#             */
/*   Updated: 2021/09/12 23:15:09 by tcharpen         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_check_one_and_four(char *str)
{
	int	i;
	int	count_one;
	int	count_four;

	count_one = 0;
	count_four = 0;
	i = -1;
	while (str[++i])
	{
		if (str[i] == '1')
			count_one++;
		else if (str[i] == '4')
			count_four++;
	}
	if (count_one != 1 || count_four > 1)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	else
		return (1);
}

int	ft_error(char **str)
{
	int	i;
	int	j;

	i = -1;
	while (str[++i])
	{
		if (!ft_check_one_and_four(str[i]))
			return (0);
	}
	i = 0;
	while (str[i])
	{
		j = -1;
		while (str[i][++j])
		{
			if (str[i][j] - 48 + str[i + 1][j] - 48 < 3
					|| str[i][j] - 48 + str[i + 1][j] - 48 > 5)
			{
				write(1, "Error\n", 6);
				return (0);
			}
		}
		i += 2;
	}
	return (1);
}
