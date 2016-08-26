/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suvitiel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/12 00:55:23 by suvitiel          #+#    #+#             */
/*   Updated: 2016/08/12 01:17:33 by suvitiel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_collatz_conjecture(unsigned int base)
{
	if (base == 1)
		return (base - 1);
	if (base % 2 == 1)
		return (ft_collatz_conjecture(base * 3 + 1) + 1);
	else
		return (ft_collatz_conjecture(base / 2) + 1);
}
