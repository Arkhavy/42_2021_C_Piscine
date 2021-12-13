/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsqlib.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljohnson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 17:19:29 by ljohnson          #+#    #+#             */
/*   Updated: 2021/09/22 13:34:29 by ljohnson         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQLIB_H
# define BSQLIB_H
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>

typedef struct s_point
{
	int		x;
	int		y;
	char	c;
	char	*pouet;
}t_point;

int		check_file(char **srcs);
void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
char	*ft_strcpy(char *dest, char *src);
char	*ft_str_create(char *buff);
char	*ft_readfile(char *file);
char	**ft_split(char *str, char *charset);
void	fillxyc(t_point *point, int pos, int size, char **c);
void	ft_free(char **srcs);
void	ft_free_struct(t_point *tab);
void	fill_square(t_point *tab, int x, int y, int size);
void	display(t_point *tab, int x, int y, int size);
int		recu(t_point *tab, int x, int y, int size);
int		ft_char_is_charset(char c, char *charset);
int		cond(t_point *point, int size);
int		ft_char_is_charset(char c, char *charset);
int		ft_nb_string(char *str, char *charset);
int		ft_size_str(char *str, char *charset, int i);
int		gr(t_point *point, int size);
int		maxx(t_point *point);
int		maxy(t_point *point);
int		check_file(char **srcs);
int		check_l1(char *str);
int		ft_char_is_printable(char c);
long	ft_atoi(char *str);
t_point	*ft_struct(char **srcs);
t_point	*incr_y(t_point *point, int x);

#endif
