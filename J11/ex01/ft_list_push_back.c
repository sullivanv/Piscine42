/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suvitiel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/17 11:11:46 by suvitiel          #+#    #+#             */
/*   Updated: 2016/08/19 03:34:34 by suvitiel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *new_list;
	t_list *list;

	list = 0;
	new_list = ft_create_elem(data);
	if (*begin_list == 0)
		(*begin_list) = new_list;
	else
	{
		list = *begin_list;
		while ((*begin_list)->next)
			(*begin_list) = (*begin_list)->next;
		(*begin_list)->next = new_list;
		*begin_list = list;
	}
}
