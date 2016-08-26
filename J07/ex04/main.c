/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suvitiel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/16 04:03:32 by suvitiel          #+#    #+#             */
/*   Updated: 2016/08/16 04:11:33 by suvitiel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char            **ft_split_whitespaces(char *str);

int main(int argc, char **argv)
{
	(void)argc;
	char **tab;
	tab = ft_split_whitespaces(argv[1]);
	int i = 0;
	while (tab[i] != 0)
	{
		printf("\ntab[%i]->%s", i, tab[i]);
		i++;
	}
	return (0);
}
