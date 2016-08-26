/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suvitiel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/18 03:23:28 by suvitiel          #+#    #+#             */
/*   Updated: 2016/08/19 04:56:51 by suvitiel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>


t_list *ft_create_elem(void *data);
void    ft_list_sort(t_list **begin_list, int (*cmp)());

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
	t_list	*list5;
	t_list	*list6;
	t_list	*list7;
	t_list	*list8;

	list1 = ft_create_elem("data8");
	list2 = ft_create_elem("data1");
	list3 = ft_create_elem("data3");
	list4 = ft_create_elem("data4");
	list5 = ft_create_elem("data7");
	list6 = ft_create_elem("data6");
	list7 = ft_create_elem("data7");
	list8 = ft_create_elem("data0");

	list1->next = list2;
	list2->next = list3;
	list3->next = list4;
	list4->next = list5;
	list5->next = list6;
	list6->next = list7;
	list7->next = list8;
	
	ft_list_sort(&list1, &ft_strcmp);
	while (list1)
	{
		printf("%s\n", list1->data);
		list1 = list1->next;
	}
}
