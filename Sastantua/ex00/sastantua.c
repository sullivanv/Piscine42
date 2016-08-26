/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suvitiel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/07 00:44:48 by suvitiel          #+#    #+#             */
/*   Updated: 2016/08/07 11:10:51 by suvitiel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_print_little(int nbetoile, int nbespace, int etage)
{
	int count;
	int i;

	count = 0;
	i = 0;
	while (count < etage)
	{
		while (i++ < nbespace)
			ft_putchar(' ');
		i = 0;
		ft_putchar('/');
		while (nbetoile > i)
		{
			ft_putchar('*');
			i++;
		}
		i = 0;
		ft_putchar('\\');
		ft_putchar('\n');
		nbetoile = nbetoile + 2;
		nbespace--;
		count++;
	}
	return (count);
}

int		init_sas(int nbetoile, int i, int taille, int size)
{
	int etage;
	int nbespace;
	int count;

	count = 0;
	nbespace = taille / 2;
	etage = 3;
	while (count < size - 1)
	{
		if (count % 2 == 0)
		{
			taille = ft_print_little(nbetoile, nbespace, etage);
			i = i + 2;
		}
		if (count % 2 == 1)
		{
			taille = ft_print_little(nbetoile + 1, nbespace, etage);
			i = i + 4;
		}
		nbetoile = nbetoile + i - 1;
		nbespace = nbespace - taille * 1.5;
		count++;
		etage++;
	}
	return (nbespace);
}

void	end_print_sas(int *data, int *nbespace, int count)
{
	while (data[2] < *nbespace)
	{
		ft_putchar(' ');
		data[2]++;
	}
	ft_putchar('/');
	data[2] = 0;
	while (data[2] < data[0])
	{
		if (data[1] - 2 >= 5 && count == data[1] / 2 + 1 &&
			data[2] == data[0] / 2 - data[3] / 2 + data[3] - 2)
			ft_putchar('$');
		else if ((data[2] >= (data[0] / 2 - data[3] / 2) &&
				(data[2] < ((data[0] / 2 - data[3] / 2) + data[3]))) &&
				(data[1] - count) <= data[3])
			ft_putchar('|');
		else
			ft_putchar('*');
		data[2]++;
	}
	data[2] = 0;
	ft_putchar('\\');
	*nbespace = *nbespace - 1;
	data[0] = data[0] + 2;
	ft_putchar('\n');
}

void	end_sas(int size, int taille, int nbespace, int count)
{
	int data[4];

	data[2] = 0;
	data[0] = 2;
	data[1] = size + 2;
	data[3] = (size % 2 == 1) ? size : size - 1;
	while (size--)
		data[0] = data[0] + 2;
	data[0] = taille - data[0];
	while (count < data[1])
	{
		end_print_sas(data, &nbespace, count);
		count++;
	}
}

void	sastantua(int size)
{
	int nbr;
	int count;
	int i;
	int taille;

	nbr = 5;
	count = 1;
	i = 8;
	if (size == 0)
		return ;
	while (count < size)
	{
		i = (count % 2 == 0) ? i + 2 : i + 4;
		nbr = nbr + i;
		count++;
	}
	taille = nbr;
	nbr = 1;
	count = 0;
	i = 8;
	nbr = init_sas(nbr, i, taille, size);
	i = 0;
	end_sas(size, taille, nbr, i);
}
