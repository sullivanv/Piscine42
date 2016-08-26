/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle04.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suvitiel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/05 23:09:12 by suvitiel          #+#    #+#             */
/*   Updated: 2016/08/07 19:43:46 by suvitiel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_pos(int i, int j, int x, int y)
{
	if (i == 1 && j == 1)
		ft_putchar('o');
	else if (i == x && j == 1)
		ft_putchar('o');
	else if (i == 1 && j == y)
		ft_putchar('o');
	else if (i == x && j == y)
		ft_putchar('o');
	else if (j == y || j == 1)
		ft_putchar('|');
	else if (i == x || i == 1)
		ft_putchar('-');
	else
		ft_putchar(' ');
}

void	colle(int x, int y)
{
	int i;
	int j;

	i = 1;
	j = 1;
	if (x <= 0 || y <= 0)
		return ;
	while (i <= y)
	{
		while (j <= x)
		{
			ft_print_pos(i, j, y, x);
			j++;
		}
		ft_putchar('\n');
		j = 1;
		i++;
	}
}
