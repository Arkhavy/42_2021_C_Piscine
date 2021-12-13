/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_struct.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereverd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 16:13:32 by jereverd          #+#    #+#             */
/*   Updated: 2021/09/19 19:38:56 by ljohnson         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "tab_struct.h"
#include "english_dict.h"
#include <stdlib.h>

struct	s_dict_entry	*set_str(void)
{
	t_dict_entry tab[19];

	tab[0].str = ZERO;
	tab[1].str = ONE;
	tab[2].str = TWO;
	tab[3].str = THREE;
	tab[4].str = FOUR;
	tab[5].str = FIVE;
	tab[6].str = SIX;
	tab[7].str = SEVEN;
	tab[8].str = EIGHT;
	tab[9].str = NINE;
	tab[10].str = TEN;
	tab[11].str = TWENTY;
	tab[12].str = THIRTY;
	tab[13].str = FORTY;
	tab[14].str = FIFTY;
	tab[15].str = SIXTY;
	tab[16].str = SEVENTY;
	tab[17].str = EIGHTY;
	tab[18].str = NINETY;
}

struct	s_dict_entry *set_numbers(void)
{
	int	i;
	int nb;
	struct s_dict_entry *dico;

	i = 0;
	nb = 10;
	dico = malloc(sizeof(*dico) * 18);
	while (i < 18)
	{
		if (i > 9)
			dico[i].key = nb += 10;
		else
			dico[i].key = i;
		i++;
	}
	return (dico);
}
