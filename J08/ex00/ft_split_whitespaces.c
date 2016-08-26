/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suvitiel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/14 07:43:54 by suvitiel          #+#    #+#             */
/*   Updated: 2016/08/16 03:46:57 by suvitiel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_init_line(char *line, int *i, int j, char *str)
{
	int x;

	x = 0;
	while (j < *i)
	{
		line[x] = str[j];
		j++;
		x++;
	}
	line[x] = '\0';
	return (line);
}

char	**ft_init_tab(char *str, int count, int *i)
{
	int		x;
	int		j;
	char	**tab;

	x = 0;
	*i = 0;
	tab = (char**)malloc((sizeof(tab) * count) + 1);
	while (x < count)
	{
		while ((str[*i] == ' ' || str[*i] == '\n' || str[*i] == '\t') &&
				str[*i])
			*i = *i + 1;
		j = *i;
		while (str[*i] != ' ' && str[*i] != '\n' && str[*i] != '\t' && str[*i])
			*i = *i + 1;
		tab[x] = (char*)malloc(sizeof(tab[x]) * (*i - j) + 2);
		tab[x] = ft_init_line(tab[x], i, j, str);
		x++;
	}
	tab[x] = 0;
	return (tab);
}

char	**ft_split_whitespaces(char *str)
{
	int i;
	int count;
	int first;

	i = 0;
	count = 0;
	first = 0;
	while (str[i])
	{
		while ((str[i] == ' ' || str[i] == '\n' || str[i] == '\t') && str[i])
			i++;
		while (str[i] != ' ' && str[i] != '\n' && str[i] != '\t' && str[i])
		{
			if (first == 0)
				count++;
			first = 1;
			i++;
		}
		first = 0;
	}
	return (ft_init_tab(str, count, &i));
}
