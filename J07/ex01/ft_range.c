/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suvitiel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/12 22:44:26 by suvitiel          #+#    #+#             */
/*   Updated: 2016/08/15 07:25:02 by suvitiel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int	size;
	int	*tab;

	size = 1;
	if (min < max)
		size = max - min + 1;
	tab = (int*)malloc(sizeof(tab) * size);
	if (min >= max)
		return (NULL);
	size = 0;
	while (min < max)
	{
		tab[size] = min;
		size++;
		min++;
	}
	return (tab);
}
