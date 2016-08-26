/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operateurs.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suvitiel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/20 06:11:42 by suvitiel          #+#    #+#             */
/*   Updated: 2016/08/21 05:43:50 by suvitiel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "protos.h"

char	*ft_add(char *str, int first, int ope)
{
	int res;

	if (str[first - 1] == 'm')
	{
		res = ft_atoi(&str[first - 1]) + ft_atoi(&str[ope + 1]);
		str = ft_replace(str, ope, first - 1, res);
	}
	else
	{
		res = ft_atoi(&str[first]) + ft_atoi(&str[ope + 1]);
		str = ft_replace(str, ope, first, res);
	}
	return (str);
}

char	*ft_mul(char *str, int first, int ope)
{
	int res;

	if (str[first - 1] == 'm')
	{
		res = ft_atoi(&str[first - 1]) * ft_atoi(&str[ope + 1]);
		str = ft_replace(str, ope, first - 1, res);
	}
	else
	{
		res = ft_atoi(&str[first]) * ft_atoi(&str[ope + 1]);
		str = ft_replace(str, ope, first, res);
	}
	return (str);
}

char	*ft_div(char *str, int first, int ope)
{
	int res;

	if (str[first - 1] == 'm')
	{
		res = ft_atoi(&str[first - 1]) / ft_atoi(&str[ope + 1]);
		str = ft_replace(str, ope, first - 1, res);
	}
	else
	{
		res = ft_atoi(&str[first]) / ft_atoi(&str[ope + 1]);
		str = ft_replace(str, ope, first, res);
	}
	return (str);
}

char	*ft_sub(char *str, int first, int ope)
{
	int res;

	if (str[first - 1] == 'm')
	{
		res = ft_atoi(&str[first - 1]) - ft_atoi(&str[ope + 1]);
		str = ft_replace(str, ope, first - 1, res);
	}
	else
	{
		res = ft_atoi(&str[first]) - ft_atoi(&str[ope + 1]);
		str = ft_replace(str, ope, first, res);
	}
	return (str);
}

char	*ft_mod(char *str, int first, int ope)
{
	int res;

	if (str[first - 1] == 'm')
	{
		res = ft_atoi(&str[first - 1]) % ft_atoi(&str[ope + 1]);
		str = ft_replace(str, ope, first - 1, res);
	}
	else
	{
		res = ft_atoi(&str[first]) % ft_atoi(&str[ope + 1]);
		str = ft_replace(str, ope, first, res);
	}
	return (str);
}
