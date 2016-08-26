/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_decrypt.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suvitiel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/12 07:48:40 by suvitiel          #+#    #+#             */
/*   Updated: 2016/08/12 09:35:20 by suvitiel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_perso.h"

int		ft_atoi(char *str)
{
	int i;
	int nbr;
	int isneg;

	isneg = 0;
	i = 0;
	nbr = 0;
	while (str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			isneg = 1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nbr = nbr * 10 + (str[i] - '0');
		i++;
	}
	if (isneg == 1)
		return (-nbr);
	return (nbr);
}

/*
**count = tab[3];	int i; tab[0];	int j; tab[1];	int countname; tab[2]
*/

t_perso	**ft_init_tab(t_perso **tab, char *str, int *ts)
{
	char *name;

	while (str[ts[0]++])
	{
		tab[ts[3]] = malloc(sizeof(t_perso));
		ts[2] = 0;
		tab[ts[3]]->age = ft_atoi(str + ts[0]);
		while (str[ts[0]] != '|' && str[ts[0]])
			ts[0]++;
		ts[0]++;
		ts[1] = ts[0];
		while (str[ts[0]] != ';' && str[ts[0]++])
			name = (char*)malloc(sizeof(name) * (ts[0] - ts[1]) + 1);
		tab[ts[3]]->name = (char*)malloc(sizeof(name) * (ts[0] - ts[1]) + 1);
		while (ts[1] < ts[0])
		{
			name[ts[2]] = str[ts[1]];
			ts[1]++;
			ts[2]++;
		}
		name[ts[2]] = '\0';
		tab[ts[3]]->name = name;
		ts[3]++;
	}
	return (tab);
}

t_perso	**ft_decrypt(char *str)
{
	int		i;
	int		count;
	t_perso	**tab;
	int		ts[4];

	ts[0] = 0;
	ts[3] = 0;
	i = 0;
	count = 1;
	while (str[i])
	{
		if (str[i] == ';')
			count++;
		i++;
	}
	tab = (t_perso**)malloc(sizeof(tab) * count + 1);
	tab = ft_init_tab(tab, str, ts);
	return (tab);
}
