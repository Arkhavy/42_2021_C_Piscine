/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljohnson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 16:16:39 by ljohnson          #+#    #+#             */
/*   Updated: 2021/09/04 16:25:12 by ljohnson         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long int	a;
	long int	b;

	b = nb;
	if (b < 0)
	{
		ft_putchar('-');
		a = -b;
	}
	else
	{
		a = b;
	}
	if (a > 9)
	{
		ft_putnbr(a / 10);
		a %= 10;
	}
	ft_putchar (a + '0');
}
