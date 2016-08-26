/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fonction2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suvitiel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/20 06:10:55 by suvitiel          #+#    #+#             */
/*   Updated: 2016/08/21 04:53:46 by suvitiel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "protos.h"

char	*ft_removedoubleneg(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '-' && str[i + 1] == '-')
		{
			str[i] = '+';
			str[i + 1] = ' ';
			i = -1;
		}
		i++;
	}
	return (str);
}

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
	if (str[i] == 'm' || str[i] == '+')
	{
		if (str[i] == 'm')
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

int		ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power == 1)
		return (nb);
	return (nb * ft_recursive_power(nb, power - 1));
}

char	*ft_itoa_bis(char *result, int i, int nbr, int signe)
{
	int count;
	int index;

	index = 0;
	if (signe == 1)
	{
		result[index] = '-';
		index++;
	}
	if (nbr == 0)
		return ("0");
	while (i > 0)
	{
		count = ft_recursive_power(10, i - 1);
		result[index] = (nbr / count) + 48;
		i--;
		index++;
		nbr = nbr % count;
	}
	result[index] = '\0';
	return (result);
}

char	*ft_itoa(int nbr)
{
	char	*result;
	int		n;
	int		signe;
	int		i;

	i = 0;
	signe = 0;
	if (nbr < 0)
	{
		nbr = -nbr;
		signe = 1;
	}
	n = nbr;
	while (n >= 1)
	{
		n = n / 10;
		i++;
	}
	result = (char*)malloc(sizeof(char) * i + 1);
	return (ft_itoa_bis(result, i, nbr, signe));
}
