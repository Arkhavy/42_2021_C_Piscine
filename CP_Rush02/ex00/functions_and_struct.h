/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions_and_struct.h                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljohnson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 11:52:03 by jereverd          #+#    #+#             */
/*   Updated: 2021/11/06 13:59:56 by ljohnson         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCTIONS_H
# define FUNCTIONS_H

struct	s_dict_entry *set_numbers(void);
char	*ft_split_writer(char *strsplit);
struct	s_dict_entry	*set_str(void);
int	ft_error(int argc, char **argv);
void	ft_putstr(char *str);
void	ft_putchar(char c);
int	ft_strlen(char *str);
char	*ft_parsing(char *str);
typedef	struct s_dict_entry
{
	char *str;
	int	key;
} t_dict_entry;

#endif
