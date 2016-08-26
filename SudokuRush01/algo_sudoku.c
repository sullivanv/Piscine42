/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_sudoku.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apetitje <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/13 18:41:06 by apetitje          #+#    #+#             */
/*   Updated: 2016/08/15 01:07:35 by suvitiel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int		check_line(char **tab, char nbr, int y)
{
	int x;

	x = 0;
	while (x < 9)
	{
		if (tab[y][x] == nbr)
			return (0);
		x++;
	}
	return (1);
}

int		check_column(char **tab, char nbr, int x)
{
	int y;

	y = 0;
	while (y < 9)
	{
		if (tab[y][x] == nbr)
			return (0);
		y++;
	}
	return (1);
}

int		check_bloc(char **tab, char nbr, int y, int x)
{
	int		case_x;
	int		case_y;
	int		i;
	int		j;

	case_x = x - x % 3;
	case_y = y - y % 3;
	i = case_x + 2;
	j = case_y + 2;
	while (case_y <= j)
	{
		while (case_x <= i)
		{
			if (tab[case_y][case_x] == nbr)
				return (0);
			case_x++;
		}
		case_x = x - x % 3;
		case_y++;
	}
	return (1);
}

int		ft_algo2(int *nb_sol, char ***tabcpy, char **tab)
{
	*nb_sol = *nb_sol + 1;
	if (*nb_sol > 1)
		return (0);
	if (*nb_sol == 1)
		*tabcpy = tab_copy(tab);
	return (1);
}

int		ft_main_algo(char **tab, int position, int *nb_sol, char ***tabcpy)
{
	char	nbr;
	int		x;
	int		y;

	x = position % 9;
	y = position / 9;
	nbr = '1';
	if (position == 81)
		return (ft_algo2(nb_sol, tabcpy, tab));
	if (tab[y][x] != '.')
		ft_main_algo(tab, position + 1, nb_sol, tabcpy);
	while (nbr <= '9')
	{
		if (check_line(tab, nbr, y) == 1 && check_column(tab, nbr, x) == 1
			&& check_bloc(tab, nbr, y, x) == 1 && tab[y][x] == '.')
		{
			tab[y][x] = nbr;
			ft_main_algo(tab, position + 1, nb_sol, tabcpy);
			tab[y][x] = '.';
		}
		nbr++;
	}
	return (0);
}
