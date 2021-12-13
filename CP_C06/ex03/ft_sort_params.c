/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljohnson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 11:46:09 by ljohnson          #+#    #+#             */
/*   Updated: 2021/09/13 13:56:52 by ljohnson         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	a;

	a = 0;
	while (str[a])
		a++;
	write (1, str, a);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	a;

	a = 0;
	while (s1[a] || s2[a])
	{
		if (s1[a] == s2[a])
			a++;
		else
			return (s1[a] - s2[a]);
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int		a;
	int		b;
	char	*temp;

	a = 1;
	b = 1;
	while (a < argc - 1)
	{
		if (ft_strcmp(argv[a], argv[a + 1]) > 0)
		{
			temp = argv[a];
			argv[a] = argv[a + 1];
			argv[a + 1] = temp;
			a = 0;
		}
		a++;
	}
	while (b < argc)
	{
		ft_putstr(argv[b]);
		b++;
		write(1, "\n", 1);
	}
	return (0);
}
