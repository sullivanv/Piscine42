/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   end_sudoku.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apetitje <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/14 17:46:00 by apetitje          #+#    #+#             */
/*   Updated: 2016/08/14 20:13:21 by apetitje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

char	**ft_init_tab(char **argv)
{
	char	**tab;
	int		x;
	int		y;

	y = 0;
	if (!(tab = (char**)malloc(sizeof(char*) * (9 + 1))))
		return (NULL);
	while (y < 9)
	{
		if (!(tab[y] = (char*)malloc(sizeof(char) * (9 + 1))))
			return (NULL);
		x = 0;
		while (x < 10)
		{
			tab[y][x] = argv[y + 1][x];
			x++;
		}
		y++;
	}
	tab[y] = NULL;
	return (tab);
}

char	**tab_copy(char **tab)
{
	char	**tabcpy;
	int		y;
	int		x;

	y = 0;
	if (!(tabcpy = (char**)malloc(sizeof(char*) * (9 + 1))))
		return (NULL);
	while (y < 9)
	{
		if (!(tabcpy[y] = (char*)malloc(sizeof(char) * (9 + 1))))
			return (NULL);
		x = 0;
		while (x < 10)
		{
			tabcpy[y][x] = tab[y][x];
			x++;
		}
		y++;
	}
	tabcpy[y] = NULL;
	return (tabcpy);
}

void	tab_free(char **tab)
{
	int		y;

	y = 0;
	while (y < 10)
	{
		free(tab[y]);
		y++;
	}
	free(tab);
}
