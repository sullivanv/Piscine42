/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suvitiel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/18 03:20:34 by suvitiel          #+#    #+#             */
/*   Updated: 2016/08/18 04:34:22 by suvitiel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

#include <stdlib.h>

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int i;

	i = 0;
	while (begin_list->next && i < nbr)
	{
		begin_list = begin_list->next;
		i++;
	}
	if (i < nbr)
		return (begin_list->next);
	return (begin_list);
}
