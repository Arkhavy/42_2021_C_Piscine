/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljohnson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 08:29:04 by ljohnson          #+#    #+#             */
/*   Updated: 2021/09/19 19:26:01 by ljohnson         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_putstr(char *str)
{
	int	a;

	a = 0;
	while (str[a])
		a++;
	write(1, str, a);
}

int	ft_check_argv_content(char **argv)
{
	int	a;

	a = 0;
	while (argv[1][a])
	{
		if (!(argv[1][a] >= '0' && argv[1][a] <= '9'))
		{
			ft_putstr("Error, not a valid unsigned int.\n");
			return (0);
		}
		a++;
	}
	if (a > 39)
	{
		ft_putstr("Error, arg too long to handle");
		return (0);
	}
	return (1);
}

int	ft_error(int argc, char **argv)
{
	if (argc < 2 || argc > 3)
	{
		ft_putstr("Error, not a valid number of arg.\n");
		return (0);
	}
	if (!*argv[1])
	{
		ft_putstr("Error, not a valid arg.\n");
		return (0);
	}
	if (ft_check_argv_content(**argv) == 0)
		return (0);
	return (1);
}
