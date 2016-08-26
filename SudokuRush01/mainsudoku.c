/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainsudoku.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suvitiel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/14 22:06:29 by suvitiel          #+#    #+#             */
/*   Updated: 2016/08/14 22:18:18 by suvitiel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int		ft_check_line(char *str)
{
	int		i;
	int		j;
	int		length;

	i = 0;
	length = 0;
	while (str[length])
	{
		length++;
	}
	while (i < length)
	{
		j = 0;
		while (j < length)
		{
			if (!(str[i] > '0' && str[i] <= '9') && (str[i] != '.'))
				return (0);
			if (i != j && str[i] == str[j] && str[i] != '.')
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int		ft_parse_column(char **argv)
{
	int		i;
	int		j;
	char	*str;
	int		indexstr;

	i = 1;
	j = 0;
	indexstr = 0;
	while (j < 10)
	{
		str = (char*)malloc(sizeof(str) * (9 + 1));
		while (indexstr < 9)
		{
			str[indexstr] = argv[i][j];
			i++;
			indexstr++;
		}
		str[indexstr] = '\0';
		if (ft_check_line(str) == 0)
			return (0);
		i = 1;
		indexstr = 0;
		j++;
	}
	return (1);
}

int		ft_parse_arg(char **argv)
{
	int i;
	int j;
	int countnbr;

	i = 1;
	j = 0;
	countnbr = 0;
	while (i < 10)
	{
		while (argv[i][j])
		{
			if (argv[i][j] > '0' && argv[i][j] <= '9')
				countnbr++;
			j++;
		}
		if (j != 9)
			return (0);
		if (ft_check_line(argv[i]) == 0)
			return (0);
		i++;
		j = 0;
	}
	if (countnbr < 17)
		return (0);
	return (1);
}

int		main(int argc, char **argv)
{
	char	**tab;
	char	**tabcpy;
	int		nb_sol;

	tabcpy = NULL;
	nb_sol = 0;
	if (argc != 10)
	{
		ft_putstr("Erreur\n");
		return (0);
	}
	if (ft_parse_arg(argv) == 0 || ft_parse_column(argv) == 0)
	{
		ft_putstr("Erreur\n");
		return (0);
	}
	tab = ft_init_tab(argv);
	ft_main_algo(tab, 0, &nb_sol, &tabcpy);
	if (nb_sol == 1)
		print_sudoku(tabcpy);
	else
		ft_putstr("Erreur\n");
	tab_free(tabcpy);
	tab_free(tab);
	return (0);
}
