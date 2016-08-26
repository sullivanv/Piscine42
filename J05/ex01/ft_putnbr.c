/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suvitiel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/10 01:02:53 by suvitiel          #+#    #+#             */
/*   Updated: 2016/08/10 01:02:59 by suvitiel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	my_put_unsigned(unsigned int nb)
{
	if (nb >= 10)
	{
		my_put_unsigned(nb / 10);
		my_put_unsigned(nb % 10);
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
	my_put_unsigned(nb);
}
