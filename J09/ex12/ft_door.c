/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_door.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suvitiel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/12 06:36:30 by suvitiel          #+#    #+#             */
/*   Updated: 2016/08/12 07:10:15 by suvitiel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_door.h"

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	write(1, str, i);
}

void	open_door(t_door *door)
{
	ft_putstr("Door opening...\n");
	door->state = OPEN;
}

void	close_door(t_door *door)
{
	ft_putstr("Door closing...\n");
	door->state = CLOSE;
}

t_bool	is_door_open(t_door *door)
{
	ft_putstr("Door is open ?\n");
	return (door->state);
}

t_bool	is_door_close(t_door *door)
{
	ft_putstr("Door is close ?\n");
	return (door->state);
}
