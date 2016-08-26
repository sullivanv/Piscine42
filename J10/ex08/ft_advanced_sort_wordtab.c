/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_wordtab.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suvitiel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/17 09:07:26 by suvitiel          #+#    #+#             */
/*   Updated: 2016/08/17 09:11:25 by suvitiel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap_string(char **s1, char **s2, int *i)
{
	char *temp;

	temp = *s1;
	*s1 = *s2;
	*s2 = temp;
	*i = -1;
}

void	ft_advanced_sort_wordtab(char **tab, int (*cmp)(char *, char *))
{
	int i;

	i = 0;
	while (tab[i + 1] != 0)
	{
		if (cmp(tab[i], tab[i + 1]) > 0)
			ft_swap_string(&tab[i], &tab[i + 1], &i);
		i++;
	}
}
