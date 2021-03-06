/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljohnson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 15:48:56 by ljohnson          #+#    #+#             */
/*   Updated: 2021/09/02 16:19:49 by ljohnson         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	i[3];

	i[0] = '0';
	while (i[0] <= '7' )
	{
		i[1] = '0';
		while (i[1] <= '8')
		{
			i[2] = '0';
			while (i[2] <= '9')
			{
				if (i[0] < i[1] && i[1] < i[2])
				{
					write(1, i, 3);
					if (! (i[0] == '7' && i[1] == '8' && i[2] == '9'))
					{
						write(1, ", ", 2);
					}
				}
				i[2]++;
			}
			i[1]++;
		}
		i[0]++;
	}
}
