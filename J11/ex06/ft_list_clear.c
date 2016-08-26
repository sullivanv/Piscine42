/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suvitiel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/18 02:32:55 by suvitiel          #+#    #+#             */
/*   Updated: 2016/08/18 06:42:00 by suvitiel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list *list;

	while ((*begin_list))
	{
		list = (*begin_list);
		(*begin_list) = (*begin_list)->next;
		free(list);
	}
	*begin_list = NULL;
}
