/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljohnson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 13:03:00 by ljohnson          #+#    #+#             */
/*   Updated: 2021/09/19 19:35:30 by ljohnson         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#define BUF_SIZE 4096
#include "functions_and_struct.h"

int	main(int argc, char **argv)
{
	char	*parsedstr;
	int		fd;
	int		ret;

	if (argc == 3)
	{
		fd = open(argv[2], O_RDONLY);
		if (fd == -1)
		{
			ft_putstr("Dict Error, can't read anything\n");
			return (0);
		}
		ret = read(fd, parsedstr, BUF_SIZE);
		if (close(fd) == -1)
		{
			ft_putstr("Error, closing Dict failed\n");
			return (0);
		}
	}
	if (ft_error(argc, argv) == 0)
		return (0);
	ft_putstr(ft_split_writer(ft_split(argv[1], ft_strlen(argv[1]))));
	return (0);
}
