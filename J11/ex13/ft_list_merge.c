/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suvitiel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/18 10:43:13 by suvitiel          #+#    #+#             */
/*   Updated: 2016/08/18 11:05:23 by suvitiel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list *list1;

	list1 = *begin_list1;
	if (list1 == 0)
		*begin_list1 = begin_list2;
	else
	{
		while (list1->next)
			list1 = list1->next;
		list1->next = begin_list2;
	}
}
