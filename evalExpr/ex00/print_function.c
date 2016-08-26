/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_function.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suvitiel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/20 02:29:16 by suvitiel          #+#    #+#             */
/*   Updated: 2016/08/20 02:39:35 by suvitiel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "protos.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}

void	ft_put_unsigned(unsigned int nb)
{
	if (nb >= 10)
	{
		ft_put_unsigned(nb / 10);
		ft_put_unsigned(nb % 10);
	}
	else
	{
		ft_putchar(nb + '0');
	}
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	ft_put_unsigned(nb);
}
