/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suvitiel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/11 21:49:19 by suvitiel          #+#    #+#             */
/*   Updated: 2016/08/13 15:29:50 by suvitiel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place_bis(int hour)
{
	if (hour == 11)
	{
		printf("THE FOLLOWING TAKES PLACE BETWEEN");
		printf(" %i.00 A.M. AND %i.00 P.M.", hour, hour + 1);
	}
	else if (hour == 23)
	{
		hour = 11;
		printf("THE FOLLOWING TAKES PLACE BETWEEN");
		printf(" %i.00 P.M. AND %i.00 A.M.", hour, hour + 1);
	}
}

void	ft_takes_place(int hour)
{
	if (hour >= 1 && hour < 11)
	{
		printf("THE FOLLOWING TAKES PLACE BETWEEN");
		printf(" %i.00 A.M. AND %i.00 A.M.", hour, hour + 1);
	}
	else if (hour >= 13 && hour < 23)
	{
		printf("THE FOLLOWING TAKES PLACE BETWEEN");
		printf(" %i.00 P.M. AND %i.00 P.M.", hour - 12, hour - 12 + 1);
	}
	else if (hour == 0)
	{
		printf("THE FOLLOWING TAKES PLACE BETWEEN");
		printf(" %i.00 A.M. AND %i.00 A.M.", hour + 12, hour + 1);
	}
	else if (hour == 12)
	{
		printf("THE FOLLOWING TAKES PLACE BETWEEN");
		printf(" %i.00 P.M. AND %i.00 P.M.", hour, hour - 11);
	}
	else
		ft_takes_place_bis(hour);
	printf("\n");
}

int		main(void)
{
	ft_takes_place(24);
	return (0);
}
