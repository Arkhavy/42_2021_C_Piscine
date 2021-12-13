/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljohnson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 11:16:05 by ljohnson          #+#    #+#             */
/*   Updated: 2021/09/13 11:45:45 by ljohnson         ###   ########lyon.fr   */
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

int	main(int argc, char **argv)
{
	int	a;

	a = argc - 1;
	while (a > 0)
	{
		ft_putstr(argv[a]);
		write(1, "\n", 1);
		a--;
	}
}
