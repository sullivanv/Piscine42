/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suvitiel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/19 03:53:41 by suvitiel          #+#    #+#             */
/*   Updated: 2016/08/19 04:24:55 by suvitiel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_list.h"

t_list  *ft_list_push_params(int ac, char **av);

int main(int argc, char **argv)
{
	t_list *plist;
	t_list *tmp;
	
	plist = ft_list_push_params(argc, argv);
	tmp = plist;
	while (tmp != 0)
	{
		printf("%s\n", tmp->data);
		tmp = tmp->next;
	}
	return (0);
}
