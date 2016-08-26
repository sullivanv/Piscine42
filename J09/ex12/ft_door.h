/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_door.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suvitiel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/12 06:51:21 by suvitiel          #+#    #+#             */
/*   Updated: 2016/08/12 07:13:21 by suvitiel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DOOR_H
# define FT_DOOR_H

# include <stdlib.h>
# include <unistd.h>

# define CLOSE 0
# define OPEN 1

typedef	int		t_bool;

typedef	struct	s_door
{
	t_bool	state;
}				t_door;

void			ft_putstr(char *str);
void			open_door(t_door *door);
void			close_door(t_door *door);
t_bool			is_door_open(t_door *door);
t_bool			is_door_close(t_door *door);

#endif
