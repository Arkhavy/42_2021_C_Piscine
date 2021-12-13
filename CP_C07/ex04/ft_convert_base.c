/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljohnson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 22:34:57 by ljohnson          #+#    #+#             */
/*   Updated: 2021/09/22 22:36:26 by ljohnson         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_catchar(char *str);
int		ft_atoi_base(char *str, char *base);
void	recursive_putnbr(long number, int blen, char *base, char *c_num);
void	ft_putnbr_base(int nbr, char *base, char *c_num);
char	*ft_convert_base(char *nbr, char *base_from, char *base_to);

int	ft_strlen(char *str)
{
	int	a;

	a = 0;
	while (str[a])
		a++;
	return (a);
}

int	is_valid(char *base)
{
	int	a;
	int	b;

	if (ft_strlen(base) < 2)
		return (0);
	a = 0;
	while (base[a])
	{
		b = a + 1;
		if (base[a] == '+' || base[a] == '-' || base[a] == ' '
			|| (base[a] >= 9 && base[a] <= 13))
			return (0);
		while (base[b])
		{
			if (base[a] == base[b])
				return (0);
			b++;
		}
		a++;
	}
	return (1);
}

int	is_in_base(char c, char *base)
{
	int	a;

	a = 0;
	while (base[a])
	{
		if (base[a] == c)
			return (a);
		a++;
	}
	return (-1);
}

char	*ft_strdup(char *str)
{
	int		a;
	char	*dup;

	a = 0;
	dup = malloc((ft_strlen(str) + 1) * sizeof(*dup));
	while (str[a])
	{
		dup[a] = str[a];
		a++;
	}
	dup[a] = '\0';
	return (dup);
}
