/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suvitiel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/18 04:36:20 by suvitiel          #+#    #+#             */
/*   Updated: 2016/08/18 06:27:18 by suvitiel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list *tmp;
	t_list *list;
	t_list *first;

	list = *begin_list;
	while (*begin_list)
		(*begin_list) = (*begin_list)->next;
	first = *begin_list;
	while (list)
	{
		tmp = list->next;
		list->next = first;
		first = list;
		list = tmp;
	}
	*begin_list = first;
}
