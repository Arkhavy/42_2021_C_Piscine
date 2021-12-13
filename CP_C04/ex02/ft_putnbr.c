/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljohnson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 12:49:09 by ljohnson          #+#    #+#             */
/*   Updated: 2021/09/08 12:55:53 by ljohnson         ###   ########lyon.fr   */
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
		a = b;
	if (a > 9)
	{
		ft_putnbr(a / 10);
		a %= 10;
	}
	ft_putchar (a + '0');
}
