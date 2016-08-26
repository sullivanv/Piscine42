/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suvitiel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/18 03:23:28 by suvitiel          #+#    #+#             */
/*   Updated: 2016/08/18 09:05:29 by suvitiel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

t_list *ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)());
t_list *ft_create_elem(void *data);

int ft_strcmp(char *s1, char *s2)
{
	int i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
		i++;
	return (s1[i] - s2[i]);
}

int main()
{
	t_list	*list1;
	t_list	*list2;
	t_list	*list3;
	t_list	*list4;

	list1 = ft_create_elem("data1");
	list2 = ft_create_elem("data2");
	list3 = ft_create_elem("data3");
	list4 = ft_create_elem("data4");

	list1->next = list2;
	list2->next = list3;
	list3->next = list4;

	t_list *result = ft_list_find(list1, "data5", &ft_strcmp);
	if (result)
		printf("%s", result->data);
	else
		printf("NULL");
}
