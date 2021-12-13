/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljohnson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 08:28:55 by ljohnson          #+#    #+#             */
/*   Updated: 2021/09/20 08:50:03 by ljohnson         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	a;

	a = 0;
	while (str[a])
		a++;
	write(1, str, a);
}

void	ft_putnbr(int nb)
{
	unsigned int	a;

	if (nb < 0)
	{
		ft_putchar('-');
		a = -nb;
	}
	else
		a = nb;
	if (a > 9)
		ft_putnbr(a / 10);
	ft_putchar(a % 10 + '0');
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	a;

	a = 0;
	while (par[a].str)
	{
		ft_putstr(par[a].str);
		ft_putstr("\n");
		ft_putnbr(par[a].size);
		ft_putstr("\n");
		ft_putstr(par[a].copy);
		ft_putstr("\n");
		a++;
	}
}
