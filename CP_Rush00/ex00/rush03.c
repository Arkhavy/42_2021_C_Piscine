/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljohnson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 11:25:46 by ljohnson          #+#    #+#             */
/*   Updated: 2021/09/04 11:26:41 by ljohnson         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print(char start, char middle, char end, int x)
{
	ft_putchar(start);
	while (x > 2)
	{
		ft_putchar(middle);
		x--;
	}
	if (x == 2)
	{
		ft_putchar(end);
	}
	ft_putchar('\n');
}

void	rush(x, y)
{
	if (y <= 0 || x <= 0)
	{
		return ;
	}
	ft_print('A', 'B', 'C', x);
	while (y > 2)
	{
		ft_print('B', ' ', 'B', x);
		y--;
	}
	if (y == 2)
	{
		ft_print('A', 'B', 'C', x);
	}
}
