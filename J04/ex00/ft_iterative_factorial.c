/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suvitiel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/05 04:36:15 by suvitiel          #+#    #+#             */
/*   Updated: 2016/08/05 04:51:34 by suvitiel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int nbr;

	nbr = nb;
	nb--;
	if (nbr < 0 || nbr > 12)
		return (0);
	if (nbr == 0)
		return (1);
	while (nb > 0)
	{
		nbr = nbr * nb;
		nb--;
	}
	return (nbr);
}
