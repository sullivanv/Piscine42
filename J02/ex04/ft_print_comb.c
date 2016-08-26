/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suvitiel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/03 23:13:22 by suvitiel          #+#    #+#             */
/*   Updated: 2016/08/04 22:46:04 by suvitiel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_nbr(int hun, int dec, int uni)
{
	ft_putchar(hun + '0');
	ft_putchar(dec + '0');
	ft_putchar(uni + '0');
	if (!(hun == 7 && dec == 8 && uni == 9))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	int	hun;
	int	dec;
	int	uni;

	hun = 0;
	dec = 1;
	uni = 2;
	while (hun < 8)
	{
		while (dec < 9)
		{
			while (uni < 10)
			{
				ft_print_nbr(hun, dec, uni);
				uni++;
			}
			dec++;
			uni = dec + 1;
		}
		hun++;
		dec = hun + 1;
		uni = dec + 1;
	}
}
