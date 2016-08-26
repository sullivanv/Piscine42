/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suvitiel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/04 01:13:34 by suvitiel          #+#    #+#             */
/*   Updated: 2016/08/04 22:44:00 by suvitiel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_tab(int *tab, int n, int sortie)
{
	int i;

	i = 0;
	while (i < n)
	{
		ft_putchar(tab[i] + '0');
		i++;
	}
	if (sortie == 0)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

int		ft_tab_is_valid(int *tab, int n)
{
	int i;
	int prev;

	i = 0;
	while (i < n)
	{
		prev = tab[i];
		i++;
		if (prev >= tab[i])
			return (0);
	}
	return (1);
}

int		is_finish(int *tab, int n)
{
	int max;
	int tabmax[n];
	int count;
	int n2;

	n2 = n;
	n--;
	max = 9;
	count = 0;
	while (n >= 0)
	{
		tabmax[n] = max;
		n--;
		max--;
	}
	while (tab[count] == tabmax[count])
		count++;
	if (count >= n2)
		return (1);
	return (0);
}

void	ft_increment_tab(int *tab, int n)
{
	int x;
	int sortie;

	x = n - 1;
	sortie = 0;
	while (sortie == 0)
	{
		if (is_finish(tab, n) == 1)
			sortie = 1;
		if (ft_tab_is_valid(tab, n) == 1)
			ft_print_tab(tab, n, sortie);
		tab[x]++;
		if (tab[x] > 9)
		{
			tab[x] = 0;
			x--;
			while (tab[x] == 9)
			{
				tab[x] = 0;
				x--;
			}
			tab[x]++;
			x = n - 1;
		}
	}
}

void	ft_print_combn(int n)
{
	int tab[n];
	int count;

	count = 0;
	if (n == 1)
	{
		while (count < 10)
		{
			ft_putchar(count + '0');
			if (count < 9)
				ft_putchar(',');
			if (count < 9)
				ft_putchar(' ');
			count++;
		}
	}
	else
	{
		while (count < n)
		{
			tab[count] = count;
			count++;
		}
		ft_increment_tab(tab, n);
	}
}
