/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fonction.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suvitiel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/17 06:58:47 by suvitiel          #+#    #+#             */
/*   Updated: 2016/08/17 08:03:10 by suvitiel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doop.h"

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putchara(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}

void	my_put_unsigned(unsigned int nb)
{
	if (nb >= 10)
	{
		my_put_unsigned(nb / 10);
		my_put_unsigned(nb % 10);
	}
	else
	{
		ft_putchara(nb + '0');
	}
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchara('-');
		nb = -nb;
	}
	my_put_unsigned(nb);
}
