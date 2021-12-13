/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljohnson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 18:06:33 by ljohnson          #+#    #+#             */
/*   Updated: 2021/09/09 08:58:32 by ljohnson         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_err(char *base)
{
	int	a;
	int	b;

	a = 0;
	if (!base)
		return (0);
	while (base[a])
	{
		if (! (base[a] >= 32 && base[a] <= 126))
			return (0);
		if (base[a] == '-' || base[a] == '+')
			return (0);
		b = a + 1;
		while (base[b])
		{
			if (base[a] == base[b])
				return (0);
			b++;
		}
		a++;
	}
	if (a < 2)
		return (0);
	return (a);
}

void	display(int b, char *base, unsigned int base_length)
{
	unsigned int	a;

	if (b < 0)
	{
		ft_putchar('-');
		a = -b;
	}
	else
		a = b;
	if (a >= base_length)
		display(a / base_length, base, base_length);
	ft_putchar (base[a % base_length]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	base_length;

	base_length = 2;
	base_length = ft_err(base);
	if (!base_length)
		return ;
	display(nbr, base, base_length);
}
