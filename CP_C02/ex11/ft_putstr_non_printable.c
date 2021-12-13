/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljohnson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 09:11:41 by ljohnson          #+#    #+#             */
/*   Updated: 2021/09/07 16:37:56 by ljohnson         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int		a;
	char	*hexbase;

	hexbase = "0123456789abcdef";
	a = 0;
	while (str[a])
	{
		if (! (str[a] >= 32 && str[a] <= 126))
		{
			write(1, "\\", 1);
			write(1, &hexbase[(unsigned char)str[a] / 16], 1);
			write(1, &hexbase[(unsigned char)str[a] % 16], 1);
		}
		else
			write(1, &str[a], 1);
		a++;
	}
}
