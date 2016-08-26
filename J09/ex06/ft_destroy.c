/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_destroy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suvitiel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/12 00:40:45 by suvitiel          #+#    #+#             */
/*   Updated: 2016/08/12 00:52:46 by suvitiel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_ultimator.h"

void	ft_destroy(char ***factory)
{
	int x;
	int y;

	x = 0;
	y = 0;
	while (factory[x][y])
	{
		while (factory[x][y])
		{
			free(factory[x][y]);
			y++;
		}
		free(factory[x]);
		y = 0;
		x++;
	}
	free(factory);
}
