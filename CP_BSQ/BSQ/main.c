/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njaros <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 19:03:05 by njaros            #+#    #+#             */
/*   Updated: 2021/09/22 13:36:26 by ljohnson         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "bsqlib.h"

int	main(int argc, char **argv)
{
	int				i;
	char			*str;
	char			**srcs;
	t_point			*plateau;

	(void)argc;
	i = 1;
	str = ft_readfile(argv[i]);
	if (str[0] == '\0')
	{
		write(1, "bien tenté \n", 12);
		return (0);
	}
	srcs = ft_split(str, "\n");
	free (str);
	plateau = ft_struct(srcs);
	recu(plateau, 0, 0, 0);
	return (0);
}
