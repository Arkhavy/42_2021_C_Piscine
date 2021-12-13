/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_writer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljohnson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 17:29:13 by ljohnson          #+#    #+#             */
/*   Updated: 2021/09/19 19:40:23 by ljohnson         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_split_writer(char **strsplit)
{
	char	split[13][3];
	char	*output;
	int		a;
	int		b;

	a = 0;
	while (a <= 13)
	{
		b = 0;
		while (b <= 2)
		{
			if (b == 0 && split[a][b] != '0')
				output = output + + " hundred and ";
			else if (b == 1 && split[a][b] != '0')
				output = output + + " ";
			else if ((b == 2 && split[a][b] != '0') || split[a][1] != '1')
				output = output + + " ";
			b++;
		}
		output = output + " ";
		a++;
	}
	return (output);
}
