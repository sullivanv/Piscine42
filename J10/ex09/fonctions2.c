/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fonction2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suvitiel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/17 07:10:02 by suvitiel          #+#    #+#             */
/*   Updated: 2016/08/17 10:46:12 by suvitiel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doop.h"

int	ft_usage(int nbr, int nbr2)
{
	nbr = 0;
	nbr2 = 0;
	return (-123432196);
}

int	ft_atoi(char *str)
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
