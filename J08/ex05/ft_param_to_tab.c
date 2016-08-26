/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suvitiel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/15 21:30:50 by suvitiel          #+#    #+#             */
/*   Updated: 2016/08/16 22:34:43 by suvitiel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

char				*ft_strdup(char *src)
{
	int		i;
	char	*dest;

	i = 0;
	while (src[i])
		i++;
	dest = (char*)malloc(sizeof(dest) * i + 1);
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int					ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

struct	s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	t_stock_par *t_struct;
	int			i;

	i = 0;
	t_struct = (t_stock_par*)malloc(sizeof(*t_struct) * ac + 1);
	while (i < ac)
	{
		t_struct[i].size_param = ft_strlen(av[i]);
		t_struct[i].str = av[i];
		t_struct[i].copy = ft_strdup(av[i]);
		t_struct[i].tab = ft_split_whitespaces(av[i]);
		i++;
	}
	t_struct[i].str = 0;
	return (t_struct);
}
