/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_switch_case.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcharpen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 20:25:12 by tcharpen          #+#    #+#             */
/*   Updated: 2021/09/12 23:17:23 by tcharpen         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_backtrack(char **tab, int x, int y, char **str);

int	ft_switch_case(char **tab, int x, int y, char **str)
{
	int	check;

	if ((x == 0 && y < 3) || (x == 1 && y < 2))
		check = ft_backtrack(tab, x, y + 1, str);
	if ((x < 3 && y == 3) || (x == 1 && y == 2))
		check = ft_backtrack(tab, x + 1, y, str);
	if ((x == 3 && y > 0) || (x == 2 && y == 2))
		check = ft_backtrack(tab, x, y - 1, str);
	if (y == 0 && x > 1)
		check = ft_backtrack(tab, x - 1, y, str);
	return (check);
}
