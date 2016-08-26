/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suvitiel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/12 01:47:22 by suvitiel          #+#    #+#             */
/*   Updated: 2016/08/12 02:14:52 by suvitiel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}

int		ft_strcmp_esc_space_maj(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s1[i] == ' ')
		i++;
	if (s1[i] >= 'A' && s1[i] <= 'Z')
		s1[i] = s1[i] + 32;
	while (s1[i] == s2[j] && s1[i] && s2[j] && s1[i] != ' ' && s2[j] != ' ')
	{
		if (s1[i + 1] >= 'A' && s1[i + 1] <= 'Z')
			s1[i + 1] = s1[i + 1] + 32;
		i++;
		j++;
	}
	while (s1[i] == ' ')
		i++;
	if (s1[i] == '\0')
		return (s1[i] - s2[j]);
	return (1);
}

int		main(int argc, char **argv)
{
	int i;

	i = 1;
	while (i < argc)
	{
		if ((ft_strcmp_esc_space_maj(argv[i], "president") == 0) ||
			(ft_strcmp_esc_space_maj(argv[i], "attack") == 0) ||
			(ft_strcmp_esc_space_maj(argv[i], "powers") == 0))
		{
			ft_putstr("Alert!!!\n");
			return (0);
		}
		i++;
	}
	return (0);
}
