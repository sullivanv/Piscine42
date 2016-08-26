/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suvitiel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/17 04:00:32 by suvitiel          #+#    #+#             */
/*   Updated: 2016/08/17 04:03:02 by suvitiel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *returntab;

	i = 0;
	returntab = (int*)malloc(sizeof(returntab) * length);
	while (i < length)
	{
		returntab[i] = f(tab[i]);
		i++;
	}
	return (returntab);
}
