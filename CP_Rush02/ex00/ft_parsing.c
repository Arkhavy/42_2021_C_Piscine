/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljohnson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 18:55:12 by ljohnson          #+#    #+#             */
/*   Updated: 2021/09/19 20:10:48 by ljohnson         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	a;

	a = 0;
	while (str[a])
		a++;
	return (a);
}

int	is_number(char *str, int a)
{
	int	b;

	b = 0;
	while (str[a + b] >= '0' && str[a + b] <= '9')
		b++;
	return (b);
}

int	is_letter(char *str, int a)
{
	int	b;

	b = 0;
	while ((str[a + b] >= 'a' && str[a + b] <= 'z')
		|| (str[a + b] >= 'A' && str[a + b] <= 'Z'))
		b++;
	return (b);
}

char	*ft_parsing(char *str)
{
	char	tab[2][41];
	int		a;
	int		b;
	int		c;

	a = -1;
	c = 0;
	**tab = (char)malloc(sizeof(char *) * (ft_strlen(str) * 651));
	while (str[a++])
	{
		if (str[a] >= '0' && str[a] <= '9')
		{
			b = -1;
			while (b <= is_number(&str[a], a))
				tab[0][c] = str[a + b++];
		}
		a += b;
		if ((str[a] >= 'a' && str[a] <= 'z')
			|| (str[a] >= 'A' && str[a] <= 'Z'))
		{
			b = -1;
			while (b <= is_letter(&str[a], a))
				tab[1][c] = str[a + b++];
			c++;
		}
		a += b;
	}
	return (*tab);
}
