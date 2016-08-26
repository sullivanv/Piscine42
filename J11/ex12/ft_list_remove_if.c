/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suvitiel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/18 09:09:36 by suvitiel          #+#    #+#             */
/*   Updated: 2016/08/19 04:50:59 by suvitiel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *tmp;
	t_list *test;

	test = *begin_list;
	if (*begin_list == 0)
		return ;
	if (cmp((*begin_list)->data, data_ref) == 0)
	{
		tmp = *begin_list;
		test = (*begin_list)->next;
		free(tmp);
	}
	while ((*begin_list)->next)
	{
		if (cmp((*begin_list)->next->data, data_ref) == 0)
		{
			tmp = (*begin_list)->next->next;
			free((*begin_list)->next);
			(*begin_list)->next = tmp;
		}
		if ((*begin_list)->next)
			*begin_list = (*begin_list)->next;
	}
	*begin_list = test;
}
