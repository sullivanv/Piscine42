/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fight.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suvitiel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/12 10:07:23 by suvitiel          #+#    #+#             */
/*   Updated: 2016/08/12 15:37:31 by suvitiel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_fight.h"
#include "ft_perso.h"

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	write(1, str, i);
}

void	ft_fight(t_perso *name1, t_perso *name2, float point)
{
	if (name1->life <= 0.0 || name2->life <= 0.0)
		return ;
	name2->life = name2->life - point;
	ft_putstr(name1->name);
	ft_putstr(" donne un ");
	if (point == 15.0)
		ft_putstr("judo kick");
	if (point == 5.0)
		ft_putstr("judo punch");
	if (point == 20.0)
		ft_putstr("judo headbutt");
	ft_putstr(" a ");
	ft_putstr(name2->name);
	ft_putstr(".\n");
	if (name2->life <= 0.0)
	{
		ft_putstr(name2->name);
		ft_putstr(" est mort.\n");
	}
}
