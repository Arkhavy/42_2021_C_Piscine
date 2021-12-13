/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igeorge <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 09:57:08 by igeorge           #+#    #+#             */
/*   Updated: 2021/09/04 11:13:12 by igeorge          ###   ########lyon.fr   */
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
	ft_print('A', 'B', 'A', x);
	while (y > 2)
	{
		ft_print('B', ' ', 'B', x);
		y--;
	}
	if (y == 2)
	{
		ft_print('C', 'B', 'C', x);
	}	
}
