/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suvitiel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/17 05:12:10 by suvitiel          #+#    #+#             */
/*   Updated: 2016/08/22 00:08:53 by suvitiel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;
	int countsupp;
	int countinf;

	i = 0;
	countsupp = 0;
	countinf = 0;
	while (i + 1 < length)
	{
		if (f(tab[i], tab[i + 1]) > 0)
			countsupp++;
		else if (f(tab[i], tab[i + 1]) < 0)
			countinf++;
		i++;
	}
	if (countsupp != 0 && countinf != 0)
		return (0);
	return (1);
}
