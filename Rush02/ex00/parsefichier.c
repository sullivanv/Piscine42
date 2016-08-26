/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsefichier.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suvitiel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/21 07:55:08 by suvitiel          #+#    #+#             */
/*   Updated: 2016/08/21 23:35:05 by suvitiel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "colle2.h"

void	ft_aff_tab(char **tab)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (tab[i] != 0)
	{
		while (tab[i][j])
		{
			ft_putchar(tab[i][j]);
			j++;
		}
		ft_putchar('\n');
		j = 0;
		i++;
	}
}

void	ft_aff(int nbcolle, int i, int j)
{
	ft_putstr("[colle-0");
	ft_putnbr(nbcolle);
	ft_putstr("] [");
	ft_putnbr(j);
	ft_putstr("] [");
	ft_putnbr(i);
	ft_putstr("]");
}

int		ft_main_algo(char **tab)
{
	int i;
	int j;
	int nb;
	int countnb;

	i = 0;
	j = 0;
	countnb = 0;
	while (tab[0][j])
		j++;
	while (tab[i])
		i++;
	nb = ft_algo_c00(tab, i - 1, j - 1);
	if (nb == 1)
		countnb++;
	nb = ft_algo_c01(tab, i - 1, j - 1);
	if (nb == 1)
		countnb++;
	nb = ft_algo_c02(tab, i - 1, j - 1);
	if (nb == 1)
		countnb++;
	nb = ft_algo_c03(tab, i - 1, j - 1);
	if (nb == 1)
		countnb++;
	nb = ft_algo_c04(tab, i - 1, j - 1);
	if (nb == 1)
		countnb++;
	if (countnb == 0)
		return (0);
	return (1);
}

int		ft_algo(char **tab)
{
	int i;
	int j;
	int oldj;
	int first;

	first = 0;
	i = 0;
	j = 0;
	oldj = 0;
	while (tab[i])
	{
		while (tab[i][j])
			j++;
		if (first == 0)
			first = 1;
		else
		{
			if (oldj != j)
				return (0);
		}
		oldj = j;
		j = 0;
		i++;
	}
	return (1);
}

int		ft_parse_stdin(void)
{
	int		ret;
	char	*buf;
	char	**tab;

	tab = NULL;
	buf = (char*)malloc(sizeof(char) * BUF_SIZE);
	ret = read(0, buf, BUF_SIZE);
	if (ret == -1)
		return (0);
	tab = ft_split_whitespaces(buf);
	if (ft_algo(tab) == 0)
		return (0);
	else if (ft_main_algo(tab) == 0)
		return (0);
	return (1);
}
