/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljohnson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 08:59:53 by ljohnson          #+#    #+#             */
/*   Updated: 2021/09/17 12:06:25 by ljohnson         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_err(char *base)
{
	int	a;
	int	b;

	a = 0;
	if (!base)
		return (0);
	while (base[a])
	{
		if (!(base[a] >= ' ' && base[a] <= '~'))
			return (0);
		if (base[a] == '-' || base[a] == '+' || base[a] == ' ')
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

int	str_base_comp(char str, char *base)
{
	int	a;

	a = 0;
	while (base[a])
	{
		if (base[a] == str)
			return (a);
		a++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	result;
	int	negative;
	int	base_length;

	result = 0;
	negative = 1;
	base_length = ft_err(base);
	if (!base_length)
		return (0);
	while (*str && (*str == ' ' || (*str >= 9 && *str <= 13)))
		str++;
	while (*str && (*str == '-' || *str == '+'))
	{
		if (*str == '-')
			negative = -negative;
		str++;
	}
	while (*str && str_base_comp(*str, base) != -1)
	{
		result = (result * base_length) + str_base_comp(*str, base);
		str++;
	}
	return (result * negative);
}
