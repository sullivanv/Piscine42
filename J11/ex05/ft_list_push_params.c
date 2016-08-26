/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suvitiel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/17 15:36:49 by suvitiel          #+#    #+#             */
/*   Updated: 2016/08/19 08:49:43 by suvitiel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *list;

	list = ft_create_elem(data);
	list->next = *begin_list;
	*begin_list = list;
}

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*list;
	int		i;

	i = 0;
	if (ac <= 0)
		return (0);
	else
	{
		list = 0;
		while (i < ac)
		{
			ft_list_push_front(&list, av[i]);
			i++;
		}
		return (list);
	}
}
