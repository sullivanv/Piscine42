/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suvitiel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/06 08:03:22 by suvitiel          #+#    #+#             */
/*   Updated: 2016/08/06 20:12:25 by suvitiel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt_rec(int nb, int i)
{
	if (i * i == nb)
		return (i);
	if (i > 46341)
		return (0);
	return (ft_sqrt_rec(nb, i + 1));
}

int	ft_sqrt(int nb)
{
	int i;

	i = 0;
	return (ft_sqrt_rec(nb, i));
}
