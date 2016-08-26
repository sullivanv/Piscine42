/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suvitiel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/18 11:08:33 by suvitiel          #+#    #+#             */
/*   Updated: 2016/08/19 04:56:43 by suvitiel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list	*list;
	char	*temp;

	if (*begin_list == 0)
		return ;
	list = *begin_list;
	while (list->next)
	{
		if (cmp(list->data, list->next->data) > 0)
		{
			temp = list->data;
			list->data = list->next->data;
			list->next->data = temp;
			list = *begin_list;
		}
		else
			list = list->next;
	}
}
