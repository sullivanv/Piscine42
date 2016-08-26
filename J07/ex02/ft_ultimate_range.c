/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suvitiel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/14 23:37:27 by suvitiel          #+#    #+#             */
/*   Updated: 2016/08/16 05:29:43 by suvitiel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int size;
	int i;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	else
		size = max - min;
	*range = (int*)malloc(sizeof(*range) * size + 1);
	if (*range == NULL)
		return (0);
	while (min < max)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (size);
}
