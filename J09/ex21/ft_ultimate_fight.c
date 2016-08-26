/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_fight.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suvitiel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/12 15:13:48 by suvitiel          #+#    #+#             */
/*   Updated: 2016/08/12 15:57:27 by suvitiel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_ultimate_fight.h"
#include "ft_perso.h"

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	write(1, str, i);
}

float	ft_rm_point(t_perso *name2, float point)
{
	if (point == 40)
		return (name2->life - 13.0);
	else if (point == 30)
		return (name2->life - 18.0);
	else if (point == 35)
		return (name2->life - 9.0);
	else if (point == 45)
		return (name2->life - 11.0);
	else
		return (name2->life - point);
}

void	ft_print_attack(float point)
{
	if (point == 30.0)
		ft_putstr("judo chop san");
	if (point == 35.0)
		ft_putstr("judo chop shi");
	if (point == 45.0)
		ft_putstr("judo chop go");
	if (point == 13.0)
		ft_putstr("judo chop roku");
	if (point == 8.0)
		ft_putstr("judo chop shichi");
	if (point == 6.0)
		ft_putstr("judo chop hachi");
	if (point == 11.0)
		ft_putstr("judo chop ku");
	if (point == 9.0)
		ft_putstr("judo chop ju");
	if (point == 18.0)
		ft_putstr("judo chop hyaku");
	if (point == 10.0)
		ft_putstr("judo chop sen");
}

void	ft_fight(t_perso *name1, t_perso *name2, float point)
{
	if (name1->life <= 0.0 || name2->life <= 0.0)
		return ;
	name2->life = ft_rm_point(name2, point);
	ft_putstr(name1->name);
	ft_putstr(" donne un ");
	if (point == 15.0)
		ft_putstr("judo kick");
	if (point == 5.0)
		ft_putstr("judo punch");
	if (point == 20.0)
		ft_putstr("judo headbutt");
	if (point == 40.0)
		ft_putstr("judo chop ichi");
	if (point == 3.0)
		ft_putstr("judo chop ni");
	ft_print_attack(point);
	ft_putstr(" a ");
	ft_putstr(name2->name);
	ft_putstr(".\n");
	if (name2->life <= 0.0)
	{
		ft_putstr(name2->name);
		ft_putstr(" est mort.\n");
	}
}
