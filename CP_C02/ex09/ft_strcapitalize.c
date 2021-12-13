/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljohnson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 13:23:23 by ljohnson          #+#    #+#             */
/*   Updated: 2021/09/10 11:14:42 by ljohnson         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	int	a;

	a = 0;
	while (str[a])
	{
		if (str[a] >= 'A' && str[a] <= 'Z')
			str[a] = str[a] + 32;
		if (str[a] >= 'a' && str[a] <= 'z')
		{
			if (!(str[a - 1] >= '0' && str[a - 1] <= '9')
				&& !(str[a - 1] >= 'A' && str[a - 1] <= 'Z')
				&& !(str[a - 1] >= 'a' && str[a - 1] <= 'z'))
				str[a] = str[a] - 32;
			else if (str[a] == str[0])
				str[a] = str[a] - 32;
		}
		a++;
	}
	return (str);
}
