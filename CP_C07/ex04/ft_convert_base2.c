/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljohnson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 22:35:06 by ljohnson          #+#    #+#             */
/*   Updated: 2021/09/22 22:35:11 by ljohnson         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *str);
int		ft_strlen(char *str);
int		is_valid(char *base);
int		is_in_base(char c, char *base);
char	*ft_strdup(char *str);

void	ft_catchar(char *str, char c)
{
	int	a;

	a = 0;
	while (str[a])
		a++;
	str[a] = c;
	str[a + 1] = '\0';
}

int	ft_atoi_base(char *str, char *base)
{
	int		a;
	long	minus;
	long	result;

	a = 0;
	minus = 1;
	result = 0;
	while (str[a] == ' ' || (str[a] >= 9 && str[a] <= 13))
		a++;
	while (str[a] == '+' || str[a] == '-')
	{
		if (str[a] == '-')
			minus = -minus;
		a++;
	}
	while (is_in_base(str[a], base) != -1)
	{
		result = result * ft_strlen(base) + is_in_base(str[a], base);
		a++;
	}
	return ((int)(result * minus));
}

void	recursive_putnbr(long number, int blen, char *base, char *c_num)
{
	if (number < 0)
	{
		ft_catchar(c_num, '-');
		number = -number;
	}
	if (number > (blen - 1))
		recursive_putnbr(number / blen, blen, base, c_num);
	ft_catchar(c_num, base[number % blen]);
}

void	ft_putnbr_base(int nbr, char *base, char *c_num)
{
	int		blen;
	long	number;

	blen = ft_strlen(base);
	number = nbr;
	recursive_putnbr(number, blen, base, c_num);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*c_num;
	char	*final;
	int		nombre;

	if (!is_valid(base_from) || !is_valid(base_to))
		return (0);
	c_num = malloc(sizeof(*c_num) * 40);
	c_num[0] = '\0';
	nombre = ft_atoi_base(nbr, base_from);
	ft_putnbr_base(nombre, base_to, c_num);
	final = ft_strdup(c_num);
	free(c_num);
	return (final);
}
