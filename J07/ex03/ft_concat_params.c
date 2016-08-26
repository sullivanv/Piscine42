/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suvitiel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/14 07:37:00 by suvitiel          #+#    #+#             */
/*   Updated: 2016/08/15 07:45:56 by suvitiel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		ft_sizeofarg(int i, char **argv, int argc)
{
	int size;

	size = 0;
	while (i < argc)
	{
		size = size + ft_strlen(argv[i]) + 1;
		i++;
	}
	return (size);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		var[2];
	int		size;
	char	*tab;

	var[0] = 1;
	var[1] = 0;
	size = ft_sizeofarg(var[0], argv, argc);
	tab = (char*)malloc(sizeof(tab) * size + 2);
	size = 0;
	while (var[0] < argc)
	{
		while (argv[var[0]][var[1]])
		{
			tab[size] = argv[var[0]][var[1]];
			var[1]++;
			size++;
		}
		if (!(var[0] + 1 == argc))
			tab[size] = '\n';
		size++;
		var[1] = 0;
		var[0]++;
	}
	tab[size] = '\0';
	return (tab);
}
