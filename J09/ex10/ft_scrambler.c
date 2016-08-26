/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_scrambler.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suvitiel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/12 03:45:44 by suvitiel          #+#    #+#             */
/*   Updated: 2016/08/12 05:15:01 by suvitiel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_scrambler(int ***a, int *b, int *******c, int ****d)
{
	int nexta;
	int nextb;
	int nextc;
	int nextd;

	nexta = *b;
	nextb = ****d;
	nextc = ***a;
	nextd = *******c;
	***a = nexta;
	*b = nextb;
	*******c = nextc;
	****d = nextd;
}
