/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suvitiel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/05 23:08:39 by suvitiel          #+#    #+#             */
/*   Updated: 2016/08/21 08:40:28 by suvitiel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	colle(int x, int y);

int		ft_atoi(char *str)
{
	int i;
	int nbr;
	int isneg;

	isneg = 0;
	i = 0;
	nbr = 0;
	while (str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			isneg = 1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nbr = nbr * 10 + (str[i] - '0');
		i++;
	}
	if (isneg == 1)
		return (-nbr);
	return (nbr);
}

int		main(int argc, char **argv)
{
	(void)argc;
	colle(ft_atoi(argv[1]), ft_atoi(argv[2]));
	return (0);
}
