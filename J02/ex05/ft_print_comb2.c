/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suvitiel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/04 00:11:57 by suvitiel          #+#    #+#             */
/*   Updated: 2016/08/04 22:46:23 by suvitiel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_solo(int nbr)
{
	if (nbr > 9)
	{
		ft_print_solo(nbr / 10);
		ft_print_solo(nbr % 10);
	}
	else
		ft_putchar(nbr + '0');
}

void	ft_print_nbr(int nbr1, int nbr2)
{
	if (nbr1 < 10)
		ft_putchar('0');
	ft_print_solo(nbr1);
	ft_putchar(' ');
	if (nbr2 < 10)
		ft_putchar('0');
	ft_print_solo(nbr2);
	if (!(nbr1 == 98 && nbr2 == 99))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int nb1;
	int nb2;

	nb1 = 0;
	nb2 = 1;
	while (nb1 <= 98)
	{
		while (nb2 <= 99)
		{
			ft_print_nbr(nb1, nb2);
			nb2++;
		}
		nb1++;
		nb2 = nb1 + 1;
	}
}
