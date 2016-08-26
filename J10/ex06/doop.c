/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doop.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suvitiel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/17 06:58:36 by suvitiel          #+#    #+#             */
/*   Updated: 2016/08/17 08:29:23 by suvitiel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doop.h"

int	ft_operateur(char **av)
{
	if (av[2][0] == '+')
		return (0);
	else if (av[2][0] == '-')
		return (1);
	else if (av[2][0] == '*')
		return (2);
	else if (av[2][0] == '%')
		return (3);
	else if (av[2][0] == '/')
		return (4);
	else
		return (5);
}

int	ft_error(char **argv)
{
	if (argv[2][0] == '/' && ft_atoi(argv[3]) == 0)
	{
		ft_putstr("Stop : division by zero\n");
		return (0);
	}
	else if (argv[2][0] == '%' && ft_atoi(argv[3]) == 0)
	{
		ft_putstr("Stop : modulo by zero\n");
		return (0);
	}
	return (1);
}

int	main(int argc, char **argv)
{
	int calc;
	int	(*calculs[6])(int, int);

	calculs[0] = ft_add;
	calculs[1] = ft_sous;
	calculs[2] = ft_mult;
	calculs[3] = ft_mod;
	calculs[4] = ft_div;
	calculs[5] = ft_0;
	if (argc != 4)
		return (0);
	if (ft_error(argv) == 0)
		return (0);
	else
	{
		calc = ft_operateur(argv);
		ft_putnbr((*calculs[calc])(ft_atoi(argv[1]), ft_atoi(argv[3])));
		ft_putchara('\n');
	}
	return (0);
}
