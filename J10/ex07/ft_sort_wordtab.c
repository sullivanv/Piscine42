/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suvitiel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/17 08:37:05 by suvitiel          #+#    #+#             */
/*   Updated: 2016/08/17 09:12:15 by suvitiel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_swap_string(char **s1, char **s2, int *i)
{
	char *temp;

	temp = *s1;
	*s1 = *s2;
	*s2 = temp;
	*i = -1;
}

void	ft_sort_wordtab(char **tab)
{
	int i;

	i = 0;
	while (tab[i + 1] != 0)
	{
		if (ft_strcmp(tab[i], tab[i + 1]) > 0)
			ft_swap_string(&tab[i], &tab[i + 1], &i);
		i++;
	}
}
