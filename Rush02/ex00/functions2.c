/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suvitiel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/21 08:55:19 by suvitiel          #+#    #+#             */
/*   Updated: 2016/08/21 08:58:40 by suvitiel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "colle2.h"

char	*ft_strdup(char *src)
{
	int i;
	char*dest;

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
	dest[i] = src[i];
	return (dest);
}
