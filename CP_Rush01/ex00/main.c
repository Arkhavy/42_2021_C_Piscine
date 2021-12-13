/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcharpen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 19:46:28 by tcharpen          #+#    #+#             */
/*   Updated: 2021/09/12 21:25:30 by tcharpen         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

char	**ft_split(char *str, int size);
int		ft_str_check(char *str);
int		ft_error(char **str);
char	**ft_init_tab(void);
void	ft_resolve(char **str, char **tab);

void	ft_free(char **tab)
{
	int	i;

	i = 0;
	while (i < 5)
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}

int	main(int argc, char **argv)
{
	char	**split;
	int		size_str;
	char	**tab;

	if (argc != 2)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	size_str = ft_str_check(argv[1]);
	if (size_str != 31)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	split = ft_split(argv[1], size_str);
	if (!ft_error(split))
		return (0);
	tab = ft_init_tab();
	ft_resolve(tab, split);
	ft_free(tab);
	ft_free(split);
	return (0);
}
