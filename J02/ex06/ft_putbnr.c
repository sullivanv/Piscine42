/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putbnr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suvitiel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/04 00:34:35 by suvitiel          #+#    #+#             */
/*   Updated: 2016/08/04 22:53:38 by suvitiel         ###   ########.fr       */
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
