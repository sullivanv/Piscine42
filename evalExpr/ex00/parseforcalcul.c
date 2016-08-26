/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parseforcalcul.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suvitiel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/20 07:39:37 by suvitiel          #+#    #+#             */
/*   Updated: 2016/08/21 05:45:51 by suvitiel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "protos.h"

char	*ft_replace(char *str, int ope, int first, int res)
{
	char *newnumber;

	ope++;
	while ((str[ope] >= '0' && str[ope] <= '9') ||
			(str[ope] == 'm'))
		ope++;
	ope--;
	newnumber = (char*)malloc(sizeof(char) * ft_strlen(ft_itoa(res)) + 1);
	newnumber = ft_itoa(res);
	res = 0;
	while (first <= ope && newnumber[res])
	{
		str[first] = newnumber[res];
		first++;
		res++;
	}
	while (first <= ope)
	{
		str[first] = ' ';
		first++;
	}
	return (str);
}

char	*ft_calc(char *str, int first, int ope)
{
	while ((str[first] >= '0' && str[first] <= '9') || (str[ope] == 'm'))
		first--;
	first++;
	if (str[ope] == '*')
		return (ft_mul(str, first, ope));
	if (str[ope] == '%')
		return (ft_mod(str, first, ope));
	if (str[ope] == '/')
		return (ft_div(str, first, ope));
	if (str[ope] == '+')
		return (ft_add(str, first, ope));
	if (str[ope] == '-')
		return (ft_sub(str, first, ope));
	return (str);
}

char	*ft_find_priority(char *str, int first, int last)
{
	int posfirst;
	int order;

	posfirst = first;
	order = 0;
	while (first < last)
	{
		if (str[first] == '*' || str[first] == '/' || str[first] == '%')
		{
			str = ft_calc(str, first - 1, first);
			order = 1;
			break ;
		}
		first++;
	}
	while (posfirst < last && order == 0)
	{
		if (str[posfirst] == '+' || str[posfirst] == '-')
		{
			str = ft_calc(str, posfirst - 1, posfirst);
			break ;
		}
		posfirst++;
	}
	return (str);
}
