/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doop.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suvitiel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/17 06:58:36 by suvitiel          #+#    #+#             */
/*   Updated: 2016/08/17 10:51:28 by suvitiel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doop.h"
#include "ft_opp.h"

int	ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
		i++;
	return (s1[i] - s2[i]);
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
	int i;
	int n;

	i = 0;
	n = ft_atoi(argv[1]);
	if (argc != 4)
		return (0);
	if (ft_error(argv) == 0)
		return (0);
	else
	{
		while (ft_strcmp(gl_opptab[i].op, argv[2]) != 0 && i < 5)
			i++;
		if (gl_opptab[i].calculs(n, ft_atoi(argv[3])) != -123432196)
			ft_putnbr(gl_opptab[i].calculs(ft_atoi(argv[1]), ft_atoi(argv[3])));
		else
			ft_putstr("error : only [ + - * / % ] are accepted.");
		ft_putchara('\n');
	}
	return (0);
}
