/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suvitiel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/05 00:50:30 by suvitiel          #+#    #+#             */
/*   Updated: 2016/08/05 02:14:06 by suvitiel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_integer_table(int *tab, int size)
{
	int i;
	int temp;
	int temp2;

	i = 0;
	temp = 0;
	while (i < size)
	{
		temp = tab[i];
		i++;
		if (temp > tab[i])
		{
			temp2 = tab[i];
			tab[i] = temp;
			tab[i - 1] = temp2;
			i = 0;
		}
	}
}
