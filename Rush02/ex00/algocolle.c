/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algocolle.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suvitiel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/21 22:01:56 by suvitiel          #+#    #+#             */
/*   Updated: 2016/08/21 23:26:54 by suvitiel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "colle2.h"

int	ft_algo_c01(char **tab, int im, int jm)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (tab[i] != 0)
	{
		while (tab[i][j])
		{
			if (tab[0][0] != '/' || tab[im][jm] != '/' || tab[0][jm] != '\\'
					|| tab[im][0] != '\\')
				return (0);
			else if ((tab[0][j] != '*' && j != 0 && j != jm)
					|| (tab[im][j] != '*' && j != 0 && j != jm))
				return (0);
			else if ((tab[i][0] != '*' && i != 0 && i != im)
					|| (tab[i][jm] != '*' && i != 0 && i != im))
				return (0);
			j++;
		}
		j = 0;
		i++;
	}
	ft_aff(1, im + 1, jm + 1);
	return (1);
}

int	ft_algo_c00(char **tab, int im, int jm)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (tab[i] != 0)
	{
		while (tab[i][j])
		{
			if (tab[0][0] != 'o' || tab[im][jm] != 'o' || tab[0][jm] != 'o'
					|| tab[im][0] != 'o')
				return (0);
			else if ((tab[0][j] != '-' && j != 0 && j != jm)
					|| (tab[im][j] != '-' && j != 0 && j != jm))
				return (0);
			else if ((tab[i][0] != '|' && i != 0 && i != im)
					|| (tab[i][jm] != '|' && i != 0 && i != im))
				return (0);
			j++;
		}
		j = 0;
		i++;
	}
	ft_aff(0, im + 1, jm + 1);
	return (1);
}

int	ft_algo_c02(char **tab, int im, int jm)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (tab[i] != 0)
	{
		while (tab[i][j])
		{
			if (tab[0][0] != 'A' || tab[im][jm] != 'C' || tab[0][jm] != 'A'
					|| tab[im][0] != 'C')
				return (0);
			else if ((tab[0][j] != 'B' && j != 0 && j != jm)
					|| (tab[im][j] != 'B' && j != 0 && j != jm))
				return (0);
			else if ((tab[i][0] != 'B' && i != 0 && i != im)
					|| (tab[i][jm] != 'B' && i != 0 && i != im))
				return (0);
			j++;
		}
		j = 0;
		i++;
	}
	ft_aff(2, im + 1, jm + 1);
	return (1);
}

int	ft_algo_c03(char **tab, int im, int jm)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (tab[i] != 0)
	{
		while (tab[i][j])
		{
			if (tab[0][0] != 'A' || tab[im][jm] != 'C' || tab[0][jm] != 'C'
					|| tab[im][0] != 'A')
				return (0);
			else if ((tab[0][j] != 'B' && j != 0 && j != jm)
					|| (tab[im][j] != 'B' && j != 0 && j != jm))
				return (0);
			else if ((tab[i][0] != 'B' && i != 0 && i != im)
					|| (tab[i][jm] != 'B' && i != 0 && i != im))
				return (0);
			j++;
		}
		j = 0;
		i++;
	}
	ft_aff(3, im + 1, jm + 1);
	return (1);
}

int	ft_algo_c04(char **tab, int im, int jm)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (tab[i] != 0)
	{
		while (tab[i][j])
		{
			if (tab[0][0] != 'A' || tab[im][jm] != 'A' || tab[0][jm] != 'C'
					|| tab[im][0] != 'C')
				return (0);
			else if ((tab[0][j] != 'B' && j != 0 && j != jm)
					|| (tab[im][j] != 'B' && j != 0 && j != jm))
				return (0);
			else if ((tab[i][0] != 'B' && i != 0 && i != im)
					|| (tab[i][jm] != 'B' && i != 0 && i != im))
				return (0);
			j++;
		}
		j = 0;
		i++;
	}
	ft_aff(4, im + 1, jm + 1);
	return (1);
}
