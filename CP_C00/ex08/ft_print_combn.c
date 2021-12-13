/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljohnson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 18:12:58 by ljohnson          #+#    #+#             */
/*   Updated: 2021/09/21 12:07:13 by ljohnson         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_display(int *b, int n)
{
	char	c;

	while (n > 0)
	{
		c = '0' + (*b % 10);
		write(1, &c, 1);
		b++;
		n--;
	}
}

int	ft_increment(int *b, int n)
{
	int	a;

	b[n - 1]++;
	a = n - 1;
	while (a >= 0)
	{
		if (b[a] > (10 - n + a))
		{
			if (a == 0)
				return (1);
			b[a - 1]++;
			b[a] = -1;
		}
		a--;
	}
	a = 0;
	while (a < n)
	{
		if (b[a] < 0)
			b[a] = b[a - 1] + 1;
		a++;
	}
	return (0);
}

void	ft_print_combn(int n)
{
	int	b[10];
	int	a;

	a = 0;
	if (n < 1 || n > 9)
		return ;
	while (a < n)
	{
		if (a == 0)
			b[0] = 0;
		else
			b[a] = b[a - 1] + 1;
		a++;
	}
	while (1)
	{
		ft_display(b, n);
		if (ft_increment(b, n) == 1)
			break ;
		write(1, ", ", 2);
	}
}
