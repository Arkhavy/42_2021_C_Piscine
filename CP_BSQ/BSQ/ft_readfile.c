/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_readfile.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njaros <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 17:24:17 by njaros            #+#    #+#             */
/*   Updated: 2021/09/21 19:40:00 by ljohnson         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "bsqlib.h"

char	*ft_str_create(char *buff)
{
	char	*out_str;
	int		j;

	j = 0;
	out_str = malloc((ft_strlen(buff) + 1) * sizeof(char));
	while (buff[j])
	{
		out_str[j] = buff[j];
		j++;
	}
	out_str[j] = '\0';
	return (out_str);
}

char	*ft_readfile(char *file)
{
	int		fd;
	int		len;
	char	*str;
	char	buff[4046];

	fd = open(file, O_RDONLY);
	while (1)
	{
		len = read(fd, buff, 4096);
		if (len <= 0)
			break ;
		buff[len] = '\0';
		str = ft_str_create(buff);
	}
	close(fd);
	return (str);
}
