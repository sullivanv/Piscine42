/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operateurs.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suvitiel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/17 07:14:26 by suvitiel          #+#    #+#             */
/*   Updated: 2016/08/17 08:09:18 by suvitiel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doop.h"

int	ft_add(int nb1, int nb2)
{
	return (nb1 + nb2);
}

int	ft_mult(int nb1, int nb2)
{
	return (nb1 * nb2);
}

int	ft_sous(int nb1, int nb2)
{
	return (nb1 - nb2);
}

int	ft_div(int nb1, int nb2)
{
	return (nb1 / nb2);
}

int	ft_mod(int nb1, int nb2)
{
	return (nb1 % nb2);
}
